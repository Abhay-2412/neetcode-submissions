class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        bool window[256] = {false};
        auto left = 0;
	int MaxLen = 0;
	for(auto right = 0; right < s.length(); right++)
	{
		if(!window[s[right]])
		{
			window[s[right]] = true;
		}
		else
		{
			while(s[left] != s[right])
			{
				window[s[left]] = false;
				left++;
			}
			left++;
		}
			int len = right - left+1;
			MaxLen = max(MaxLen,len);

	}
        
        return MaxLen;
        
    }
};
