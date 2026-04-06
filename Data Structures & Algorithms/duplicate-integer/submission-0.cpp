class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> visited;

        for(int num : nums)
        {
            if(visited.count(num))
            {
                return true;
            }
            visited[num]++;
        }
        return false;
    }
};