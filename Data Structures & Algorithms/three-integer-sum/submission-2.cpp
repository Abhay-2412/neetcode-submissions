class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());

        vector<vector<int>> result;
        unordered_set<int> seen;
        
        for(int i=0; i< nums.size(); i++)
        {
            if(seen.count(nums[i]))continue;
            seen.insert(nums[i]);
            int left = i+1;
            int right = nums.size()-1;
            int target = -nums[i];
            
            while(left<right)
            {

                if(nums[left] + nums[right] == target)
                {

                    result.push_back({nums[i],nums[left],nums[right]});
                    while(left<right && nums[left] == nums[left+1])left++;
                    while(left<right && nums[right] == nums[right-1])right--;
                    left++;
                    right--;
                }
                else if(nums[left] + nums[right] > target)right--;
                else
                {
                    left ++;

                } 


               
            }
        }

        return result;
    }
};
