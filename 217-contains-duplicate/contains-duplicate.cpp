class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // BRUTE FORCE APPROACH TC-O(N^2) & SC-O(1)
        // for(int i=0;i<nums.size();i++){
        //     for(int j=i+1;j<nums.size();j++){
        //         if(nums[i]==nums[j]) return true;
        //     }
        // }
        // return false;
       


    //    APPROACH 2 SORTING TC-O(nlogn) SC-O(1)
    //    sort(nums.begin(),nums.end());
    //    for(int i=0;i<nums.size()-1;i++){
    //       if(nums[i]==nums[i+1]){
    //         return true;
    //       }
    //    }
    //    return false;
       
       
       
        // UNORDERED TC-O(N) SC-O(N)
        unordered_set<int>xyz;
        for(int i=0;i<nums.size();i++){
            xyz.insert(nums[i]);
            if(xyz.size() == nums.size()){
                return false;
            }
        }
        return true;


        
    }    
};