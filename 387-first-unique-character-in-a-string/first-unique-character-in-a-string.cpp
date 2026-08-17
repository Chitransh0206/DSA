class Solution {
public:
    int firstUniqChar(string s) {
        int freq[26] = {0};

    // Count frequency of every character
    for(int i = 0; i < s.length(); i++) {
        freq[s[i] - 'a']++;
    }

    // Find first unique character
    int answer = -1;

    for(int i = 0; i < s.length(); i++) {
        if(freq[s[i] - 'a'] == 1) {
            answer = i;
            break;
        }
    }
    return answer;
    }
};