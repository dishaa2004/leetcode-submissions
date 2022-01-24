class Solution {
public:
    int longestPalindromeSubseq(string s) {
        int n = s.length();
        int dp[n][n];
        
        for(int gap = 0;gap < n;gap++){
            for(int i=0,j=gap;j<n;i++,j++){
                if(gap == 0){
                    dp[i][j] = 1;
                }else if(gap == 1){
                    dp[i][j] = s[i] == s[j] ? 2 : 1;
                }else{
                    dp[i][j] = s[i] == s[j] ? 2 + dp[i+1][j-1] : max(dp[i][j-1],dp[i+1][j]);
                }
            }
        }
        return dp[0][n-1];
    }
};