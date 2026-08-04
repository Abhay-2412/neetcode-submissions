class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& arr) 
    {
        vector<vector<int>> res;
        sort(arr.begin(),arr.end());
        
        for(int i=0; i<arr.size()-1;i++)
        {
            if(i>0 && arr[i] == arr [i-1])continue;
            int target = -arr[i];
            int left = i+1;
            int right = arr.size()-1;
            while(left<right)
            {
                if(arr[left] + arr[right] < target)
                left++;
                else if(arr[left] + arr[right] > target)
                right--;
                else
                {
                     res.push_back({arr[i],arr[left],arr[right]});
                     left++;
                     right--;
                     while(left<right && arr[left] == arr[left-1])left++;
                     while(left<right && arr[right] == arr[right+1])right--;

                }

            }
            
            
        }
	
	return res;



}
};
