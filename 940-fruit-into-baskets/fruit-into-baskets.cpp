class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int left=0;
        int right=0;
        int maxlen=0;
        unordered_map<int,int>mapp;
        while(right<fruits.size()){
            mapp[fruits[right]]++;
            if(mapp.size()<=2){
                // maxlen++;
                maxlen=max(maxlen,right-left+1);
            } 
            else{
                while(mapp.size()>2){
                    mapp[fruits[left]]--;
                    if(mapp[fruits[left]]==0){
                        mapp.erase(fruits[left]);
                        
                    }
                    left++;
                }
            }
            right++;
        }
        return maxlen;
    }
};