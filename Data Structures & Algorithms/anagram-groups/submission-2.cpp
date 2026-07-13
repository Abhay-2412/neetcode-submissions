class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        unordered_map<string,vector<string>> map;
        vector<vector<string>> res;
        for (const string& s : strs)
        {
            string temp = s;
            sort(temp.begin(),temp.end());


            map[temp].push_back(s);
        }


        for(auto itr : map)
        {
            res.push_back(itr.second);
        }

        return res;
    }
};
