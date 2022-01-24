class Solution {
public:
    bool help(vector<vector<int>> &mat,int i,int j,int n,int m,int tar){
        if(i<0 || i>=m ||j<0 || j>=n) return 0; // Out of bound
        
        if(mat[i][j] == tar){
            return 1;
        }
        int l=0,r=n-1;
        int mid;
        while(l<r-1){
            mid= (l+r)/2;
            if(mat[mid][m-1] > tar){
                r = mid;
            }else{
                l = mid;
            }
        }
        
        if(mat[l][m-1] < tar) 
            return binary_search(mat[r].begin(), mat[r].end(), tar);
        return binary_search(mat[l].begin(), mat[l].end(), tar);
    }
    
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        int i=0,j=0;
        return help(matrix,i,j,n,m,target);
    }
};