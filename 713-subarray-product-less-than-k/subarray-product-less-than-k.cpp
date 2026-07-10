class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        // int num=0;
        // int product=0;
        // if(k==0) return 0;
        // for(int i=0;i<nums.size();i++){
        //     product=nums[i];
        //     if(product<k) num++;
        //     for(int j=i+1;j<nums.size();j++){
        //         product=product*nums[j];
        //         if(product<k) num++;
        //         if(product>=k) break; 
        //     }
        // }
        // return num;

        int left=0;
        // int right=0;
        int count=0;
        int product=1;
        if(k<=1) return 0;
        for(int right=0;right<nums.size();right++){
            // if(nums[right]<k) count++;
            // right++;
            product=product*nums[right];
            while(product>=k){
                product/=nums[left];
                left++;
            }
            if(product<k) count=count+(right-left+1);
        }
        return count;
    }
};