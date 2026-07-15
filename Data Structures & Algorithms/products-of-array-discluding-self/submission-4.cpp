class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> res(nums.size(),0);
        
        res[0] = 1;
        for(int i=1; i<nums.size(); i++)
        {
            res[i] = nums[i-1] * res[i-1];
        }

        int rightProduct = 1;
        for(int i=0; i<nums.size(); i++)
        {
            res[nums.size()-1-i] = rightProduct * res[nums.size()-1-i];
            rightProduct = rightProduct*nums[nums.size()-i-1];
        }

        return res;
    }
};