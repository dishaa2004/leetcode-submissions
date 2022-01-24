class Solution {
public:
    int r, c;
    int A[201][201];
    int dp[201][201];
    bool vis[201][201];
    vector<pair<int, int>> directions = { //Directions
        {1, 0}, {0, -1}, { -1, 0}, {0, 1}
    };
    
    bool ok(int i,int j){
        if(i < 0 || j < 0 || i >= r || j >= c) return 0;
        return 1;
    }
    
    int dfs(int prev, int i, int j){
        
        if(A[i][j] > prev){
            
            if(dp[i][j] != -1){
                return dp[i][j];
            }
        
            
            int d1 = 0, d2 = 0, d3 = 0, d4 = 0;
            
            if(ok(i+1,j)){
                d1 = dfs(A[i][j],i+1,j);
            }
            
            if(ok(i,j+1)){
                d2 = dfs(A[i][j],i,j+1);
            }
            
            if(ok(i-1,j)){
                d3 = dfs(A[i][j],i-1,j);
            }
            
            if(ok(i,j-1)){
                d4 = dfs(A[i][j],i,j-1);
            }
            
            return dp[i][j] = (1 + max({d1,d2,d3,d4}));
        }else{
            return 0;
        }
    }
    
    
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        r = matrix.size();
        c = matrix[0].size();
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                A[i][j] = matrix[i][j];
                dp[i][j] = -1;
            }
        }
        int ans = 1;
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                int d = dfs(-1,i,j);
                ans = max(ans,d);
            }
        }
        return ans;
    }
};