class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();
        int m = triangle[n-1].size();
        vector<vector<int>> val(n+1, vector(m+1,0));
        for(int i = n-1; i >= 0; i--)
        {
            for(int j = 0; j < triangle[i].size(); j++)
            {
                val[i][j] = triangle[i][j] + min(val[i+1][j], val[i+1][j+1]);
            }
        }
        return val[0][0];
    }
};