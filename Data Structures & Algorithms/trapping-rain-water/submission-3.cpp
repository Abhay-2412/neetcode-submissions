class Solution {
public:

    int trap(vector<int>& height) {
        
        int left = 0;
        int right = height.size()-1;
        int area = 0;
        int maxL = 0;
        int maxR = 0;
        while(left<right)
        {
            maxL = max(maxL,height[left]);
            maxR = max(maxR,height[right]);

            if(maxL < maxR)
            {
                left++;
                area += (maxL - height[left] < 0 ? 0 : maxL - height[left]);
            }
            else
            {
                right--;
                area += (maxR - height[right] < 0 ? 0 : maxR - height[right]);
            }

        }
        return area;
    }
};
