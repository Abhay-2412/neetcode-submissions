class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res(nums.begin(),nums.end());
        res[0] = 1;

        for(int i = 1;i<nums.size();i++)
        {
            if(i >= nums.size())continue;

            res[i] =nums[i-1]*res[i-1];
        }

        int right_prod = 1;
        for(int i = nums.size()-1;i>=0;i--)
        {
            if(i >= nums.size()-1)continue;
            right_prod = right_prod*nums[i+1];
            res[i] =right_prod*res[i];

        }


        return res;

    }
};
