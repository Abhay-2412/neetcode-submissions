class Solution {
public:
    bool isPalindrome(string s) {
        string res = "";
        
        for(int i=0; i<s.length();i++)
        {
        	if(s[i] != ' ' && ((65<=s[i] && s[i]<=90) || (s[i] >= '0' && s[i] <= '9')))
        	res+=s[i];
            else if((97<=s[i] && s[i]<=122))
            {
                res+=(s[i]-32);
            }
        	
        }

        int n = res.length();
        for(int i=0; i<n; i++)   
        {

            if((res[i] != res[n-1-i]) && (int(res[i]) - int(res[n-1-i]) != 32))return false;
        }     
        return true;
    }
};
