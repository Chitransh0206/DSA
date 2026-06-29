class Solution {
public:
    bool isPalindrome(string s) {
        // if(s==" ") return true;
        // string ans="",ans1="";
        // // int i;

        // for(int i=0;i<s.size();i++){
        //     if(isalnum(s[i])) {
            
        //         ans.push_back(tolower(s[i]));
        //         ans1.push_back(tolower(s[i]));
        //     }
        // }
        // int left=0,right=ans.size()-1;
        // while(left<right){
        //     swap(ans[left],ans[right]);
        //     left++;
        //     right--;
        // }
        // return ans1==ans;

        // OPTIMAL APPROACH (TWO POINTER) TC-O(N) SC-O(1)
        int left=0;
        int right=s.size()-1;
        while(left<right){
            while(left<right && !isalnum(s[left])) left++;
            while(left<right && !isalnum(s[right])) right--;

            if(tolower(s[left]) != tolower(s[right])) return false;

            left++;
            right--;
        }
        return true;
        
    }
};