class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        if(nums.empty())return 0;
       set<int> arr(nums.begin(),nums.end());
       int long_sub_seq = 1;
       int res = 1;
       auto prev = arr.begin();
       auto curr = next(arr.begin());
       while(curr != arr.end())
       {
        if(*curr-1 == *prev)
        {
            long_sub_seq++;
            res = max(res,long_sub_seq);
        }
        else long_sub_seq = 1;

        curr++;
        prev++;

       }
       
       return res;
    }
};
