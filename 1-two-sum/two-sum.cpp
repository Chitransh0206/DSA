class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        // BRUTE FORCE
        // for(int i=0;i<nums.size();i++){
        //     for(int j=0;j<nums.size();j++){
        //         if(i==j) continue;
        //         if(nums[i]+nums[j]==target) return{i,j};
        //     }
        // }
        // return {};
        
        // UPGRADED VERSION OF BRUTE FORCE
        // for(int i=0;i<nums.size()-1;i++){
        //     for(int j=i+1;j<nums.size();j++){
        //         if(nums[i]+nums[j]==target) return{i,j};
        //     }
        // }
        // return {};
        

        // OPTIMAL APPROACH {TWO POINTER- if we have to print yes or no} NOT IN THIS CASE
        // int left=0,right=nums.size()-1;
        // sort(nums.begin(),nums.end());
        // while(left<right){
        //     int sum=nums[left]+nums[right];
        //     if(sum==target){
        //         return {left,right};
        //     } 
        //     else if(sum<target) left++;
        //     else right--;
        // }
        // return {};

        // OPTIMAL APPROACH {HASHING} TC-O(N) SC-O(N)
        unordered_map<int, int>mpp;
        for(int i=0;i<nums.size();i++){
            int more = target - nums[i];
            if(mpp.find(more) != mpp.end()) return{mpp[more], i};  
            mpp[nums[i]]=i;
        }
        return {};
    }
};