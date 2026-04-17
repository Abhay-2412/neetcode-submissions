class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        vector<char> freq1(26,0);
        vector<char> freq2(26,0);

        for(char c : s1)freq1[c - 'a']++;

        for(int i = 0; i<s2.length();i++)
        {
            freq2[s2[i] - 'a']++;
            if(i >= s1.length())
            {
                freq2[s2[i -s1.length()] - 'a']--;
            }


            if(freq1 == freq2)return true;
        }

        return false;
    }
};
