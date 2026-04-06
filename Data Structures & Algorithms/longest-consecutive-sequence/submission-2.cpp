class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        if(nums.empty())return 0;
        sort(nums.begin(),nums.end());
       int long_sub_seq = 1;
       int res = 1;
        for(int i = 1; i < nums.size(); i++)
       {
        if(nums[i] == nums[i-1])continue;
        else if(nums[i-1]+1 == nums[i])long_sub_seq++;
        else long_sub_seq = 1;
        
        res = max(res,long_sub_seq);

       }
       
       return res;
    }
};
