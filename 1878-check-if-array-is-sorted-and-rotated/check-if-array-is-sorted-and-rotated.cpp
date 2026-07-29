class Solution {
public:
    bool check(vector<int>& nums) {
        // OPTIMAL APPROACH TC-O(N) SC-O(1)
        int count = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] > nums[(i+1)%(nums.size())]){
                count++;
            }
        }
        return count<2;
    }
};