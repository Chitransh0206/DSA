class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        // M1
        // sort(nums.begin(),nums.end());
        // int x = nums.size()/3;
        // vector<int>ans;
        // for(int i=0; i<nums.size(); i++){
        //     if(i>0&&nums[i]==nums[i-1]) continue;
        //     int count =0;
        //     for(int j=0; j<nums.size();j++){

        //         if(nums[i]==nums[j]) count++;
        //     }
        //     if(count>x){
        //         ans.push_back(nums[i]);
        //     }
   
        // }
        // return ans;


        // M2
        // unordered_map<int,int> mp;
        // for(int num : nums){
        //     mp[num]++;
        // }
        // vector<int> ans;
        // for(auto it : mp){
        //     if(it.second > nums.size()/3)
        //         ans.push_back(it.first);
        // }
        // return ans;


        // M3
        int count1 = 0, count2 = 0;
        int candidate1 = 0, candidate2 = 0;
        for(int num : nums){
            if(num == candidate1)
                count1++;
            else if(num == candidate2)
                count2++;
            else if(count1 == 0){
                candidate1 = num;
                count1 = 1;
            }
            else if(count2 == 0){
                candidate2 = num;
                count2 = 1;
            }
            else{
                count1--;
                count2--;
            }
        }
        count1 = 0;
        count2 = 0;
        for(int num : nums){
            if(num == candidate1)
                count1++;
            else if(num == candidate2)
                count2++;
        }
        vector<int> ans;
        if(count1 > nums.size()/3)
            ans.push_back(candidate1);
        if(count2 > nums.size()/3)
            ans.push_back(candidate2);
        return ans;
    }
};