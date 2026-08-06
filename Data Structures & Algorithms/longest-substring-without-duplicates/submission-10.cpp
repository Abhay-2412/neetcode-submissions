class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        if(s.length() == 1 || s.length() == 0)return s.length();
        int left = 0; 
        unordered_set<char> window;
        window.insert(s[left]);
        int maxLen = 0;
        int len = 1;
        for(int right=1; right < s.length(); right ++)
        {
                if(window.count(s[right]))
                {
                    maxLen = max(maxLen,len);
                    while(window.count(s[right]))
                    {
                        window.erase(s[left]);
                        len--;
                        left++;
                    }
                }
                window.insert(s[right]);
                len++;


        }
                            maxLen = max(maxLen,len);

        return maxLen;
    }
};
