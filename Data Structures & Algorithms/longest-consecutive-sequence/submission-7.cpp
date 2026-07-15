class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> visited;
        int maxLen = 0;
        for(int i=0; i<nums.size(); i++)
        {
            visited.insert(nums[i]);
        }

        for(int num : nums)
        {
            if(visited.count(num-1))continue;
            int len = 1;
            while(1)
            {
                if(visited.count(num+1))
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
