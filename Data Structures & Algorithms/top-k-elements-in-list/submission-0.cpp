class Solution {
public:
 static bool cmp(pair<int,int> a,pair<int,int> b)     {return a.second > b.second;}
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int ,int> freq;
        vector<int> res;
        for(int num : nums)
        {
            freq[num]++;
        }

        vector<pair<int,int>> v(freq.begin(),freq.end());

        sort(v.begin(),v.end(),cmp);

        for(int i = 0; i<k; i++)
        {
            res.push_back(v[i].first);
        }
    return res;
    }
};
