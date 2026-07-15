class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,int> mp;
        int maxLen = 0;
        for(int i=0; i<nums.size(); i++)
        {
            mp[nums[i]] = i;
        }

        for(int num : nums)
        {
            int len = 1;
            while(1)
            {
                if(mp.count(num+1))
                {
                    len++;
                    num++;
                }
                else
                {
                    break;
                }
            }
        maxLen = max(maxLen,len);

        }
        return maxLen;
    }
};
