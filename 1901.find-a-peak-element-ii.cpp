class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        int r = m + 2,c = n + 2;
        vector<vector<int>> pre(r,vector<int> (c,-1));
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                pre[i+1][j+1] = mat[i][j];
            }
        }
        
        // for(int i=0;i<r;i++){
        //     for(int j=0;j<c;j++){
        //         cout<<pre[i][j]<<" ";
        //     }
        //     cout<<"\n";
        // }
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(pre[i+1][j+1] > pre[i][j+1] && pre[i+1][j+1] >pre[i+1][j]
                  && pre[i+1][j+1] > pre[i+2][j+1] && pre[i+1][j+1] >pre[i+1][j+2])
                    return {i,j};
            }
        }
        
         return {-1,-1};
    }
};