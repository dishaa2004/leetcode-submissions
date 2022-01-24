class Solution {
public:
    int kthLargestValue(vector<vector<int>>& matrix, int k) {
        priority_queue<int> pq;
        int r = matrix.size(); int c = matrix[0].size();
        vector<vector<int>> dp(r,vector<int>(c,0));
        int cur = 0;
        for(int i=0;i<c;i++){
            cur ^= matrix[0][i];
            dp[0][i] = cur;
            pq.push(dp[0][i]);
        }
        cur = matrix[0][0];
        for(int i=1;i<r;i++){
            cur ^= matrix[i][0];
            dp[i][0] = cur;
            pq.push(dp[i][0]);
        }
        
        for(int i=1;i<r;i++){
            for(int j=1;j<c;j++){
                // Inclusion Exclusion  x^x = 0
                // Similar to when we calculate prefix sum for 2d matrix
dp[i][j] = (dp[i-1][j]^dp[i][j-1])^(matrix[i][j])^(dp[i-1][j-1]);
                
                pq.push(dp[i][j]);
            }
        }
        
        k--;
        while(k--) pq.pop();
        return pq.top();
    }
};