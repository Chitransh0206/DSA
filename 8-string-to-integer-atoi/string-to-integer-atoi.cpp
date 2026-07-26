class Solution {
public:
    int myAtoi(string s) {
        long long num;
        stringstream ss(s);
        ss >> num;
        if(num > INT_MAX)
            return INT_MAX;
        if(num < INT_MIN)
            return INT_MIN;
        return (int)num;

        
    }
};