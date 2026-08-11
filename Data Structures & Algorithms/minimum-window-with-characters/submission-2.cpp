class Solution {
public:
    string minWindow(string s, string t) {
        if(t.size() > s.size())
            return "";
        array<int, 128> t_freq{};
        array<int, 128> window{};
        int needed_matches = 0;
        for(int i = 0; i < t.size(); i++)
        {
            if(t_freq[t[i]] == 0)
                needed_matches++;
            t_freq[t[i]]++;
        }
        int left = 0;
        int right = t.size();
        int smallest = s.size() + 1;
        int matches = 0;
        string result;
        for(int i = 0; i < right; i++)
        {
            if(t_freq[s[i]] != 0)
            {
                window[s[i]]++;
                if(window[s[i]] == t_freq[s[i]])
                    matches++;
            }
        }
        if(matches == needed_matches)
            return s.substr(left, right-left);
        while(right < s.size())
        {
            window[s[right]]++;
            if(t_freq[s[right]] != 0 && window[s[right]] == t_freq[s[right]])
                matches++;
            while(matches == needed_matches)
            {
                if(t_freq[s[left]] != 0)
                {
                    if(window[s[left]] == t_freq[s[left]])
                        matches--;
                    window[s[left]]--;
                }
                if(matches != needed_matches && (right-left+1) < smallest)
                {
                    smallest = (right-left+1);
                    result = s.substr(left, right-left+1);
                }
                left++;
            }
            right++;
        }
        return result;
    }
};


