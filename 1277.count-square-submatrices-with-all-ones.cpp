class Solution {
public:
    int countSquares(vector<vector<int>>& matrix) {
        int r = matrix.size();
        int c = matrix[0].size();
        int dp[r][c];
        int cur = 0;
        for(int i=0;i<r;i++){
            cur += matrix[i][0];
            dp[i][0] = cur;
        }
        cur = 0;
        for(int i=0;i<c;i++){
            cur += matrix[0][i];
            dp[0][i] = cur;
        }
        
        for(int i=1;i<r;i++){
            for(int j=1;j<c;j++){
                dp[i][j] = matrix[i][j] + dp[i-1][j] + dp[i][j-1] - dp[i-1][j-1];
            }
        }
        int ans = 0;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(matrix[i][j] == 1) ans++;
                // cout << dp[i][j] << " ";
            }
            // cout << endl;
        }
        
        vector<vector<int>> dp1(r+1,vector<int>(c+1,0));

        for(int i = 1; i < r+1; i++){
            for(int j = 1; j < c+1; j++){
                dp1[i][j] = dp[i-1][j-1];
            }
        }
        
        for(int sz = 1; sz < min(r,c); sz++){
            for(int i=0;i<r-sz;i++){
                for(int j=0;j<c-sz;j++){
                    if(i+sz < r && j + sz < c){
                        int a =i+1, b = j+1, c = i+sz+1, d = j+sz+1;
                        int cur = dp1[c][d] + dp1[a-1][b-1] 
                            - dp1[c][b-1] - dp1[a-1][d];
                        
                        if(cur == (sz+1)*(sz+1)) ans++;
                    }
                }
            }
        }
        
        
        
        return ans;
    }
};