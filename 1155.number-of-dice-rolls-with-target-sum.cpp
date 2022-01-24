class Solution {
public:
    const long long int md = 1e9+7;
    int dp[31][1001];
    int help(int d,int f,int t)
    {
        if(d==0 && t==0) return 1;
        if(d==0 || t==0) return 0;
        if(dp[d][t] != -1) return dp[d][t];
        
        long long int ans = 0;
        
        for(int i=1;i<=f;i++){
            if(i<=t){
                ans += help(d-1,f,t-i);
            }
        }
        dp[d][t] = ans%md;
        return dp[d][t];
    }
    int numRollsToTarget(int d, int f, int target) {
        memset(dp,-1,sizeof(dp));
        
        return help(d,f,target);
    }
};