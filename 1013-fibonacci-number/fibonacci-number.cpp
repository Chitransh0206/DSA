class Solution {
public:
    int fib(int n) {
        // M1 SIMPLE RECURSION {BRUTE FORCE TYPE} TC-O(2^N) SC-O(N) VERY SLOW
        // if(n<=1){
        //     return n;
        // }
        // return fib(n-1)+fib(n-2);

        // M2 Tabulation (Bottom-Up DP) TC-O(N) SC-O(N)
        // if(n <= 1)
        //     return n;
        // vector<int> dp(n+1);
        // dp[0] = 0;
        // dp[1] = 1;
        // for(int i=2; i<=n; i++){
        //     dp[i] = dp[i-1] + dp[i-2];
        // }
        // return dp[n];

        // M3 Space Optimized DP TC-O(N) SC-O(1)  BEST DP SOLUTION
        // if(n<=0) return n;
        // int prev2=0;
        // int prev1=1;
        // for(int i=2;i<=n;i++){
        //     int curr=prev2+prev1;
        //     prev2=prev1;
        //     prev1=curr;
        // }
        // return prev1;


        int a=0;
        int b=1;
        if(n<=1) return n;
        int c;
        for(int i=1;i<n;i++){
            c=a+b;
            a=b;
            b=c;
        }
        return c;
    }
};