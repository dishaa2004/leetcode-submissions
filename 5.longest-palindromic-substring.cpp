class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.length();
        if(n==1)    
            return s;
        vector<vector<bool>> dp(n+1,vector<bool>(n+1,false));
        int l = 0,r = 0;
        for(int g=0;g<n;g++){
            for(int i=0,j=g;j<n;i++,j++){
                if(g==0){
                    dp[i][j] = 1;
                }else if(g == 1){
                    dp[i][j] = (s[i] == s[j]);
                }else{
                    if(s[i] == s[j] && dp[i+1][j-1] == 1){
                        dp[i][j] = 1;
                    }
                }
                
                if(dp[i][j] == 1 && g+1 > r){
                        l = i;
                        r = g+1;
                    }
            }
        }
        return s.substr(l,r);
    }
};