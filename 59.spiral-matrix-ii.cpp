class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> matrix(n,vector<int>(n));
        int r = matrix.size();
        int c = matrix[0].size();
        int sr = 0, sc = 0;
        int er = r - 1, ec = c - 1;
        int cur = 1;
        while(sr <= er && sc <= ec){
            for(int i=sc;i<=ec;i++){
                matrix[sr][i] = cur++;
                if(cur == r*c+1){
                    return matrix;
                }
            }
            sr++;
            for(int i=sr;i<=er;i++){
                matrix[i][ec] = cur++;
                if(cur == r*c+1){
                    return matrix;
                }
            }
            ec--;
            for(int j=ec;j>=sc;j--){
                matrix[er][j] = cur++;
                if(cur == r*c+1){
                    return matrix;
                }
            }
            er--;
            for(int j=er;j>=sr;j--){
                matrix[j][sc] = cur++;
                if(cur == r*c+1){
                    return matrix;
                }
            }
            sc++;
        }
        
        return matrix;
        
        
    }
};