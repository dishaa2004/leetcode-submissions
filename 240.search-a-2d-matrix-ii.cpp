class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r = matrix.size(), c = matrix[0].size();
        int i = 0 , j = c - 1;
        
        while(i<r && j>=0){
            if(target>matrix[i][j])  i++; // next row
            else if(target<matrix[i][j])  j--; // previous column

            else if(target == matrix[i][j]) return true; // We found it
        }
        return false;
    }
};