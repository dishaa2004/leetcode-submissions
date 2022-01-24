class NumMatrix {
public:
    vector<vector<int>> pf;
    NumMatrix(vector<vector<int>>& v) {
        int n = v.size();
        int m = v[0].size();
        vector<vector<int>> dp(n,vector<int>(m,0));
        int cur = 0;
        for(int i=0;i<n;i++){
            cur += v[i][0];
            dp[i][0] = cur;
        }
        
        cur = 0;
        for(int i=0;i<m;i++){
            cur += v[0][i];
            dp[0][i] = cur;
        }
        
        for(int i = 1; i < n; i++){
            for(int j = 1; j < m; j++){
                dp[i][j] = v[i][j] + dp[i-1][j] + dp[i][j-1] - dp[i-1][j-1];
            }
        }
        vector<vector<int>> dp1(n+1,vector<int>(m+1,0));

        for(int i = 1; i < n+1; i++){
            for(int j = 1; j < m+1; j++){
                dp1[i][j] = dp[i-1][j-1];
            }
        }
        pf = dp1;
    }
    
    int sumRegion(int a, int b, int c, int d) {
        a++,b++,c++,d++;
        return pf[c][d] + pf[a-1][b-1] - pf[c][b-1] - pf[a-1][d];
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */