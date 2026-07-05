class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // int maxi=nums[0];
        // for(int i=0;i<nums.size();i++){
        //     int sum=0;
        //     for(int j=i;j<nums.size();j++){
        //         sum=sum+nums[j];
        //         maxi=max(maxi,sum);
        //     } 
        // }
        // return maxi;

        int sum=0;
        int maxi=nums[0];
        for(int i=0;i<nums.size();i++){
            sum=sum+nums[i];
            maxi=max(maxi,sum);
            if(sum<0){
            sum=0;
            }
        }
        
        return maxi;
    }
};