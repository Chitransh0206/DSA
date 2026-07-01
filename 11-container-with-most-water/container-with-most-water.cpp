class Solution {
public:
    int maxArea(vector<int>& height) {
        // int n=height.size();
        // int left=0;
        // int right=n-1;
        // int maxWater=0;
        // int water;
        // while(left<right){
        //     water=(right-left)*min(height[left],height[right]);
        //     maxWater=max(maxWater,water);
        //     if(height[left]<=height[right])
        //         left++;
        //     else if(height[left]>height[right])
        //         right--;
        // }
        // return maxWater;

        int n = height.size();
        int left = 0;
        int right = n-1;
        int maxWater = 0;

        while(left<right){
            int water = min(height[left], height[right]) * (right-left);
            maxWater = max(water, maxWater);
            if(height[left]<height[right]) left++;
            else right--;
        }
        return maxWater;
    }
};