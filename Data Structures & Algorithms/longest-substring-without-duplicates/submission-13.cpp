class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
		if(s.length() == 1 || s.length() == 0)return s.length();
        unordered_set<char> window;
        auto left = s.begin();
	int MaxLen = 0;
	for(auto right = s.begin(); right < s.end(); right++)
	{
		if(window.count(*right))
		{
			while(window.count(*right))
			{
				window.erase(*left);
				left++;
			
			}
		}
	
			window.insert(*right);
			MaxLen = max(MaxLen,(int)window.size());

		
		
	
	
	}
        
        return MaxLen;
        
    }
};
