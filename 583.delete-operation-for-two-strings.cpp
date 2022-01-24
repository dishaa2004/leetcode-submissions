class Solution {
public:
    int LCS(string s1, string s2){
        int r = s1.size();
        int c = s2.size();
        vector<vector<int>> dp(r+1,vector<int>(c+1,0));
        
        for(int i=r-1;i>=0;i--){
            for(int j=c-1;j>=0;j--){
                if(s1[i] == s2[j]){
                    dp[i][j] = 1 + dp[i+1][j+1];
                }else{
                    dp[i][j] = max(dp[i+1][j],dp[i][j+1]);
                }
            }
        }
        return dp[0][0];
    }
    
    int minDistance(string word1, string word2) {
        return word1.size() + word2.size() - 2*LCS(word1,word2);    
    }
};