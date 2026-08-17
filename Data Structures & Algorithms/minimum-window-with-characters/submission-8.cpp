class Solution {
public:
    string minWindow(string s, string t) {
        int freq1[256] = {0};
        int freq2[256] = {0};
        for (int i = 0; i < t.length(); i++) freq1[t[i]]++;

        int toMatches = t.length();
        int Matches = 0;
        int left = 0, right = 0;
        int minLen = INT_MAX;
        int minStart = 0;             

        int i = 0;
        while (i < s.length()) {
            while (Matches < toMatches && i < s.length()) {
                freq2[s[i]]++;
                if (freq2[s[i]] <= freq1[s[i]]) Matches++;
                i++;
            }
            right = i;

            while (Matches == toMatches) {
                int len = right - left;
                if (len < minLen) {
                    minLen = len;
                    minStart = left;   // <-- cheap: just an int assignment
                }

                if (freq2[s[left]] <= freq1[s[left]]) Matches--;
                freq2[s[left]]--;
                left++;
            }
        }

        return minLen == INT_MAX ? "" : s.substr(minStart, minLen);  
    }
};