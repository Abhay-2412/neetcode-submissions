class Solution {
public:
    bool isPalindrome(string s) {
        int left = 0;
        int right = s.length() - 1;

        while(left<right)
        {
            if(s[left]>= 'a' && s[left]<='z' || s[left]>= 'A' && s[left]<='Z' || s[left]>= '0' && s[left]<='9' )
            {
                if(s[right]>= 'a' && s[right]<='z' || s[right]>= 'A' && s[right]<='Z' || s[right]>= '0' && s[right]<='9')
                {
                    if(s[left]    == s[right] || (
                       s[left]    == s[right] - 32 || 
                       s[left]-32 == s[right]) && !((s[left]>= '0' && s[left]<= '9') || (s[right]>= '0' && s[right]<= '9') ))
                       {
                            //
                       }

                    else
                    {
                        return false;
                    }
                }
                else 
                {
                    right --;
                    continue;
                }
            }
            else 
                {
                    left ++;
                    continue;
                }
                left++;
                right--;
        }

        return true;
    }
};
