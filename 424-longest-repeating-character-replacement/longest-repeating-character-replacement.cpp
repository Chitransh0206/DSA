class Solution {
public:
    int characterReplacement(string s, int k) {
        int left=0;
        // int right=0;
        int maxlen=0;
        int maxFreq=0;
        unordered_map<char,int>mapp;
        for(int right=0;right<s.size();right++){
            mapp[s[right]]++;
            maxFreq=max(maxFreq, mapp[s[right]]);
            while((right-left+1) - maxFreq > k){
                mapp[s[left]]--;
                left++;
            }
            maxlen=max(maxlen,right-left+1);
        }
        return maxlen;
    }
};