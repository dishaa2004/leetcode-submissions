class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {

        int n = matrix.size();
        for(int i=0;i<n;i++){
            vector<int> vis(n+1,0);
            for(int j=0;j<n;j++){
                vis[matrix[i][j]] = 1;
            }
            
            for(int p=1;p<=n;p++){
                if(!vis[p]) return 0;
            }
        }
        
        for(int i=0;i<n;i++){
            vector<int> vis(n+1,0);
            for(int j=0;j<n;j++){
                vis[matrix[j][i]] = 1;
            }
            
            for(int p=1;p<=n;p++){
                if(!vis[p]) return 0;
            }
        }
        
        return 1;
    }
};