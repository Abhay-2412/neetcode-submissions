class Solution {
public:
    string minWindow(string s, string t) {

        if(t.size() > s.size())return "";
        int matches = 0;
        int need_matches  = 0;
        vector<int> t_freq(128,0);
        vector<int> window(128,0);
        int minLen = s.length() + 1;
        int minStartIndex = 0;
        for(int i=0; i<t.length(); i++)
        {
            if(t_freq[t[i]] == 0)
            need_matches++;
            t_freq[t[i]]++;
        }

        int left = 0;
        for(int i=0; i<s.length(); i++)
        {
            if(t_freq[s[i]])
            {
                window[s[i]]++;
                if(t_freq[s[i]] == window[s[i]])
                {
                    matches++;
                }

                while(matches == need_matches)
                {
                    if(t_freq[s[left]])
                    {

                        if(t_freq[s[left]] == window[s[left]])
                        matches--;

                        if(i - left + 1 < minLen)
                        {
                            minLen = i - left + 1;
                            minStartIndex = left;
                        }                     
                           window[s[left]]--;
                    }

                    left++;
                }
            }
        }
        if(minLen > s.length())return "";
        return(s.substr(minStartIndex,minLen));
    }
};