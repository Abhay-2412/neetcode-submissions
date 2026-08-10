class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        bool window[256] = {false};
        auto left = s.begin();
	int MaxLen = 0;
	for(auto right = s.begin(); right < s.end(); right++)
	{
		if(!window[*right])
		{
			window[*right] = true;
		}
		else
		{
			while(*left != *right)
			{
				window[*left] = false;
				left++;
			}
			left++;
		}
			int len = ((right - left)+1);
			MaxLen = max(MaxLen,len);

	}
        
        return MaxLen;
        
    }
};
