class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string shortest = strs[0];
        for(int i=1; i<strs.size();i++){
            if(strs[i].size() < shortest.size()) shortest=strs[i];
        }
        string ans="";
        for(int i=0; i<shortest.size();i++){
            char ch = shortest[i];
            for(int j=0;j<strs.size();j++){
                if(strs[j][i] != ch) return ans;
            }
            ans+=ch;
        }
        return ans;
    }
};