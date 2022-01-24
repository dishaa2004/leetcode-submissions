class Solution {
public:
    map<pair<int,int>,int> dp;
    int ok(int i){
        if(i == 0 || i == 1){
            return 1;
        }
        int ans = 0;
        for(int j=1;j<=i;j++){
            int k = 0;
            if(dp[{j-1,i-j}] != 0)
                k += dp[{j-1,i-j}];
            else{
                dp[{j-1,i-j}] = ok(j-1)*ok(i-j);
                k += dp[{j-1,i-j}];
            }
            ans += k;
        }
        return ans;
    }
    
    int numTrees(int N) {
        int dp[N+1];
        memset(dp,0,sizeof(dp));
        dp[0] = 1;
        dp[1] = 1;
        
        for(int n=2;n<=N;n++){
            for(int i=1;i<=n;i++){
                dp[n] += dp[i-1]*dp[n-i];
            }
        }
        
        
        
        return dp[N];
    }
};