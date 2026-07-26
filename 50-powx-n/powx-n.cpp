// class Solution {
// public:
//     double myPow(double x, int n) {
//         long long a=n;
//         double b=1;
//         if(x==1) return x;
//         if(n<0){
//             while(a!=0){
//                 b=b*(1/x);
//                 a++;
            
//             }
//             return b;
//         }
//         else{
//             while(a!=0){
//                 b=b*x;
//                 a--;
//             }
//             return b;
//         }
//     }
// };


class Solution {
public:
    double myPow(double x, int n) {
        long long power = n;

        if (power < 0) {
            x = 1 / x;
            power = -power;
        }

        double ans = 1;

        while (power > 0) {
            if (power % 2 == 1) {
                ans = ans * x;
            }

            x = x * x;
            power = power / 2;
        }

        return ans;
    }
};