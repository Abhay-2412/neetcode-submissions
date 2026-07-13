class Solution {
public:

    static bool cmp(pair<int,int> a, pair<int,int> b)
    {
        return (a.second>b.second);
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> map;
        vector<int> res;

        for(int i : nums)
        {
            map[i]++;
        }

        vector<pair<int,int>> v(map.begin(),map.end());
        sort(v.begin(),v.end(),cmp);

        for(auto i=0; i<k; i++)
        {
            res.push_back(v[i].first);
        }

        return res;
    }
};
