class Solution {
public:

    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> count;
        vector<int> res;
        vector<vector<int>> freq(nums.size() + 1);
        for(int i : nums)
        {
            count[i]++;
        }
        for(auto &[e, c] : count)
        {
            freq[c].push_back(e);
        }

        for(int i=freq.size()-1; i>0; i--)
        {
            for(int e : freq[i])
            {
                if(res.size()>=k) return res;
                res.push_back(e);
            }
        }
        return res;
    }
};
