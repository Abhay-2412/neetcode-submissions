class Solution {
public:
    int trap(vector<int>& height) {
        int left = 0;
        int right = height.size()-1;
        int maxL = 0;
        int maxR = 0;
        int area = 0;

        while(left < right)
        {
            maxL = max(maxL,height[left]);
            maxR = max(maxR,height[right]);

            if(maxL < maxR)
            {
                left++;
                if(maxL - height[left] > 0)
                area = area + (maxL - height[left]);
            }
            else
            {
                right--;
                if(maxR - height[right] > 0)
                area = area + (maxR - height[right]);
            }

        }

        return area;

    }
};
