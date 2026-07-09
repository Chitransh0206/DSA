class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        // int left=0;
        // int right=0;
        // int maxlen=0;
        // int zeroCount=k;
        // while(right<nums.size()){
        //     if(nums[right]==1){
        //         maxlen=max(maxlen,right-left+1);
        //     }
        //     else if(nums[right]==0 && zeroCount!=0){
        //         zeroCount--;
        //         maxlen=max(maxlen,right-left+1);
        //     }
        //     else if(nums[right]==0 && zeroCount==0  && k!=0){
        //             while(nums[left]==0) {
        //                 zeroCount++;
        //                 left++;
        //             }
        //             left++;
        //     }
        //     right++;
        // }
        // return maxlen;


        int left=0;
        int right=0;
        int maxlen=0;
        int count=0;
        for(int right;right<nums.size();right++){
            if(nums[right]==0) count++;
            while(count>k){
                if(nums[left]==0) count--;
                left++;
            }
            maxlen=max(maxlen,right-left+1);
        }
        return maxlen;


    }
};