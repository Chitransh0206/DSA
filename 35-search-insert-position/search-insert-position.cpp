class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        // int low=0;
        // int high = nums.size();
        // int mid;
        // while(low<high){
        //     mid = low + (high-low)/2;
        //     if(nums[mid]==target) return mid;
        //     else if(nums[mid]<target){
        //         low=mid+1;
        //     }
        //     else{
        //         high=mid;
        //     }
        // }
        // return low;


        for(int i=0;i<nums.size();i++){
            if(nums[i]>=target){
                return i;
            }
        }
        return nums.size();
    }
};