class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
    
    deque<int> window;
    vector<int> res;
    window.push_back(0);

    for(int i=1; i<k; i++)
    {
    	while(!window.empty() && nums[window.back()] < nums[i] )
    	{
		    window.pop_back();
	    }
	
	window.push_back(i);
    }
    
    for(int right = k; right<nums.size(); right++)
    {
	res.push_back(nums[window.front()]);
	
	if(right - k  >= window.front())
	{
		window.pop_front();
	}
	
    	while(!window.empty() && nums[window.back()] < nums[right])
    	{
		    window.pop_back();
	    }
	    window.push_back(right);	
    }
    res.push_back(nums[window.front()]);   
    return res;
        
    }
};
