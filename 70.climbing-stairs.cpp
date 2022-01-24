class Solution {
public:
    int dp[50];
    int recurse(int n){
        if(n == 0){
            return 1;
        }
        if(n == 1){
            return 1;
        }
        if(n == 2){
            return 2;
        }
        int a,b;
        if(dp[n-1] == -1)
            a = recurse(n-1),dp[n-1] = a;
        else
            a = dp[n-1];
        if(dp[n-2] == -1)
            b = recurse(n-2),dp[n-2] = b;
        else
            b = dp[n-2];
        return a + b;
    }
    int climbStairs(int n) {
        memset(dp,-1,sizeof(dp));
        return recurse(n);
    }
};