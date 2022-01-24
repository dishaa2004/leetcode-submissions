class Solution {
public:
//     int dp[100000];
//     int dfs(vector<int> &v,int amt){
//         if(amt < 0) return 1e9;
//         if(amt == 0) return dp[amt] = 0;
        
//         if(dp[amt] != -1) return dp[amt];
//         int curans = 1e9;
//         for(int i=0;i<v.size();i++){
//             curans = min(curans,1+dfs(v,amt-v[i]));
//         }
//         return dp[amt] = curans;
//     }
    int coinChange(vector<int>& v, int amt) {
        // memset(dp,-1,sizeof(dp));
        if(amt <= 0) return 0;
        
        // int ans = dfs(v,amt);
        // return (ans == 1e9 ? -1 : ans);
        vector<int> dp(amt+1,1e9);
        dp[0] = 0;
        for(int i=0;i<v.size();i++){
            for(int j=0;j<=amt;j++){
                if(j - v[i] >= 0){
                    dp[j] = min(dp[j],1 + dp[j-v[i]]);
                }
            }
        }
        return dp[amt] == 1e9 ? -1 : dp[amt];
        
    }
};