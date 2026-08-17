class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        

        if(s1.length() > s2.length())return false;
        int freq1[26] = {0};
        int freq2[26] = {0};

        for(int i=0; i<s1.length(); i++)
        {
            freq1[s1[i] - 'a']++;
            freq2[s2[i] - 'a']++;

        }

        int matches = 0;
        for(int i=0; i<26; i++)
        {
            if(freq1[i] == freq2[i])matches++;
        }

        int left = 0;
        int right = s1.length();
        while(right<s2.length())
        {
            if(matches == 26)return true;

            freq2[s2[right] - 'a']++;
            if(freq2[s2[right] - 'a'] == freq1[s2[right] - 'a'])matches++;
            else if(freq2[s2[right] - 'a'] - 1 == freq1[s2[right] - 'a'])matches--; 

            freq2[s2[left] - 'a']--;
            if(freq2[s2[left] - 'a'] == freq1[s2[left] - 'a'])matches++;
            else if(freq2[s2[left] - 'a'] + 1 == freq1[s2[left] - 'a'])matches--; 

            right++;
            left++;
        }

        return matches == 26;
    }
};
