class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        unordered_map<string,vector<string>> map;
        vector<vector<string>> res;
        
        for (const string& s : strs)
        {
        int freq[26] = {0};

            for(char c : s)
            {
                freq[c - 'a']++;
            }
            string key;
            for(int i=0; i < 26; i++)
            {
                if(freq[i])
                {
                    key += (char('a' + i)  + to_string(freq[i]) + "#" ) ;         
                }
            }
            map[key].push_back(s);

        }


        for(auto itr : map)
        {
            res.push_back(itr.second);
        }

        return res;
    }
};
