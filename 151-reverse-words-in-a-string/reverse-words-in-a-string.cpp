class Solution {
public:
    string reverseWords(string s) {

        // string ans = "";
        // int i = s.size() - 1;
        // while(i >= 0){
        //     while(i >= 0 && s[i] == ' ')
        //         i--;

        //     if(i < 0) break;
        //     int j = i;
        //     while(j >= 0 && s[j] != ' ')
        //         j--;

        //     if(!ans.empty())
        //         ans += " ";

        //     ans += s.substr(j + 1, i - j);
        //     i = j - 1;
        // }
        // return ans;


        reverse(s.begin(), s.end());
        int n = s.size();
        string ans = "";
        int i = 0;
        while(i < n){
            while(i < n && s[i] == ' ')
                i++;

            if(i >= n) break;

            string word = "";

            while(i < n && s[i] != ' '){

                word += s[i];
                i++;
            }

            reverse(word.begin(), word.end());

            if(!ans.empty())
                ans += " ";

            ans += word;
        }

        return ans;
    }
};