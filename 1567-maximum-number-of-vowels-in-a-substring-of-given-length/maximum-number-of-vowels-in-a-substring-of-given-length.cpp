class Solution {
public:
    int maxVowels(string s, int k) {
        int left=0;
        int right=k-1;
        int count=0;
        int maxLen=0;
        for(int i=0;i<k;i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u') count++;
            maxLen=max(maxLen,count);
        }
        while(right<s.size()-1){
            if(s[left]=='a' || s[left]=='e' || s[left]=='i' ||s[left]=='o' ||s[left]=='u'){
                count--;
            }
            left++;
            right++;
            if(s[right]=='a' || s[right]=='e' || s[right]=='i' ||s[right]=='o' ||s[right]=='u'){
                count++;
            }
            maxLen=max(maxLen,count);

        }
        return maxLen;
    }
};