class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
         int sum=0;
        for(int i=0;i<nums.size();i++){
            int count=0;
            int add = 0;
            for(int k=1;k*k<=nums[i];k++){
                if(nums[i]%k==0){
                    if(nums[i]/k==k){
                        count++;
                        add+=k;
                    }
                    else{
                     count+=2;
                     add+=k;
                     add+=nums[i]/k;
                    }
                }
            }
            if(count==4){
                sum+=add;
               
            }
            //  return sum;
        }
        return sum;
    }
};