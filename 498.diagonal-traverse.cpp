class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        int r = mat.size();
        int c = mat[0].size();
        if(r <= 1 || c <= 1){
            vector<int> ans;
            for(auto &k : mat){
                for(auto &p : k) ans.push_back(p);
            }
            return ans;
        }
        int tot = r + c - 1;
        vector<vector<int>> vv;
        for (int slice = 0; slice < r + c - 1; ++slice) {
            printf("Slice %d: ", slice);
            int z1 = slice < c ? 0 : slice - c + 1;
            int z2 = slice < r ? 0 : slice - r + 1;
            vector<int> v;
            for (int j = slice - z2; j >= z1; --j) {
                printf("%d ", mat[j][slice - j]);
                v.push_back(mat[j][slice-j]);
            }
            vv.push_back(v);
            printf("\n");
        }
        
        for(int i=0;i<vv.size();i++){
            if((i&1)){
                reverse(vv[i].begin(),vv[i].end());
            }
        }
        
        vector<int> ans;
        for(auto &k : vv){
            for(auto &p : k) ans.push_back(p);
        }
        return ans;
    }
};