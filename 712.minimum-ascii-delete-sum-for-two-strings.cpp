class Solution {
public:
    int LCS(string &s1, string &s2){
        int r = s1.size();
        int c = s2.size();
        vector<vector<int>> dp(r+1,vector<int>(c+1,0));
        
        for(int i=r-1;i>=0;i--){
            for(int j=c-1;j>=0;j--){
                if(s1[i] == s2[j]){
                    dp[i][j] = int(s1[i]) + dp[i+1][j+1];
                }else{
                    dp[i][j] = max(dp[i+1][j],dp[i][j+1]);
                }
            }
        }
        
        return dp[0][0];
    }
    int minimumDeleteSum(string S1, string S2) {
        int n = 0, m = 0;
        for(auto &k : S1) n += int(k);        
        for(auto &k : S2) m += int(k);

        return n + m - 2*LCS(S1,S2);   
    }
};