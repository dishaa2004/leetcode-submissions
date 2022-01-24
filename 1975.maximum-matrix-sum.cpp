class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        long long ans = 0;
        int c = 0, x = INT_MAX;
 
        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[i].size(); j++) {
                ans += abs(matrix[i][j]);
                if (matrix[i][j] < 0) {
                    c++;
                }
                x = min(x, abs(matrix[i][j]));
            }
        }
 
        if (c&1) {
            ans = ans- 2 * x;
            return ans;
        }

        return ans;
    }
};