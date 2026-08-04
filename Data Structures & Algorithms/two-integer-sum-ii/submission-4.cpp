class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) 
    {
	int left = 0;
	int right = arr.size()-1;

	while(left<right)
	{
		if(arr[left] + arr[right] < target)
		{
			left++;
            continue;
		}
		else if(arr[left] + arr[right] > target)
		{
			right--;
            continue;
		}
		else
		{
			return{left+1,right+1};
		}
		
		left++;
		right--;
	}
	
	return {};
}
};
