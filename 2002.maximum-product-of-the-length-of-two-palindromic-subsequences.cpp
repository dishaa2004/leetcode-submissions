class Solution {
public:
    int lps(string &s) {
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
    int maxProduct(string s) {
        int n = s.size();
        int pw = (1<<n);
        int ans = 1;
        for(int i=0;i<pw;i++){
            string a,b;
            for(int j=0;j<n;j++){
                if(i&(1<<j)){
                    a.push_back(s[j]);
                }else{
                    b.push_back(s[j]);
                }
            }
            if(a.size() && b.size()){
                int n = lps(a);
                int m = lps(b);
                ans = max(ans,n*m);
            }
        }
        return ans;
    }
};