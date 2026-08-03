class Solution {
public:
    int longestConsecutive(vector<int>& arr) {

        int maxLen = 0;
        unordered_set<int> seen;
        for(int i=0; i<arr.size(); i++)
        {
            seen.insert(arr[i]);
        }

        for(int i = 0; i <arr.size(); i++)
        {
            if(seen.count(arr[i]-1))continue;
            int len = 0;
            int base = arr[i];
            while(1)
            {
                if(seen.count(base++))
                {
                    len++;
                }
                else
                {
                    break;
                }

            }
        maxLen = max(maxLen, len);

        }
        return maxLen;


    }
};
