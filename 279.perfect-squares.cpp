class Solution {
public:
    int numSquares(int n) {
        
        int dp[n+1];
        dp[0]=0;
        dp[1]=1;
        
        if(ceil(sqrt(n)) == floor(sqrt(n))) return 1;
        
        for(int i=2;i<=n;i++){
            int r = INT_MAX;
            for(int j=1;j*j<=i;j++){
                r = min(r,dp[i-(j*j)]+1);
            }
            dp[i] = r;
        }
        return dp[n];
    }
};