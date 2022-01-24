class Solution {
public:
    vector<vector<int>> generate(int n) {
        
        if(n==1){
            return {{1}};
        }
        
        vector<vector<int>> ans(n,vector<int>(n,0));
        
        for(int i=0;i<n;i++){
            for(int j=0;j<=min(i,n);j++){
                if(j == 0 || j == n){
                    ans[i][j] = 1;
                }else{
                    ans[i][j] = ans[i-1][j-1] + ans[i-1][j];
                }
            }
        }
        
        
        
        for(auto &k : ans){
            while(k.back() == 0) k.pop_back();
        }
        
        return ans;
    }
};