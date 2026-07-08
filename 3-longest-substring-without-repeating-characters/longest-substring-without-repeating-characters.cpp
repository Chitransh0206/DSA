class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left=0;
        int right=0;
        int maxlen=1;
        unordered_map<char, int>mapp;
        if(s.length()==0) return 0;

        while(right<s.size()){
            mapp[s[right]]++;
            if(mapp.size()==(right-left+1)){
                // mapp[s[right]]++;
                maxlen=max(maxlen, right-left+1);
            }
            else{
                while(mapp.size()!=right-left+1){
                  mapp[s[left]]--;  
                  if(mapp[s[left]]==0) mapp.erase(s[left]);
                  left++;
                  
                }
            }

            right++;
        }
        return maxlen;
    }
};