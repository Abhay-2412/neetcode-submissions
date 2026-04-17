class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        if(s.length() == 1)return 1;
        unordered_set<char> window;
        int Maxlen = 0;
        
        int left = 0;
        int right = 0;
        while(right<s.length())
        {
        	if(!window.count(s[right]))
        	{
        		window.insert(s[right]);
        		right++;        		
            }
            else
            {
                do
                {
                    
                    window.erase(s[left]);
                    left++;	
                    
                }while(window.count(s[right]));
                
                window.insert(s[right]);
                right++;
            }

                Maxlen = max(Maxlen,(int)window.size());

        }
        
        return Maxlen;
    }
};
