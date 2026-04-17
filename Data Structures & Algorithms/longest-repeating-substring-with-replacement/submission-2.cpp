class Solution {
public:
    int characterReplacement(string s, int k) {
        int left = 0;
        int maxFreq = 0;
        int maxLen = 0;
        vector<int> freq(26, 0);

        for (int right = 0; right < s.length(); right++) {
            freq[s[right] - 'A']++;
            maxFreq = max(maxFreq, freq[s[right] - 'A']);

            int len = right - left + 1;

            if (len - maxFreq > k) {
                // shrink window from left
                freq[s[left] - 'A']--;
                // KEY FIX: shrink maxFreq along with the window
                maxFreq--;
                left++;
            }

            maxLen = max(maxLen, right - left + 1);
        }

        return maxLen;
    }
};