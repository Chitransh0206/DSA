class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int num=0;
        int product=0;
        if(k==0) return 0;
        for(int i=0;i<nums.size();i++){
            product=nums[i];
            if(product<k) num++;
            for(int j=i+1;j<nums.size();j++){
                product=product*nums[j];
                if(product<k) num++;
                if(product>=k) break; 
            }

        }
        return num;
    }
};