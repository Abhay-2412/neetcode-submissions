class Solution {
public:
    int characterReplacement(string s, int k) {
        int left = 0;
        int right = 0;
        int maxFreq = 0;
        int maxLen = 0;
        vector<int> freq(26,0);
        while(right<s.length())
        {
            int len = right - left + 1;
            freq[s[right] - 'A']++;
            maxFreq = max(maxFreq,freq[s[right] - 'A']);

            if(len - maxFreq <= k)
            {
                cout<<len<<" "<<maxFreq<<endl;
                maxLen = max(maxLen,len);
                right++;
            }
            else
            {

                freq[s[left] - 'A']--;
                right++;
                left++;
                maxFreq--;
              


            }
        }

        return maxLen;
    }
};
