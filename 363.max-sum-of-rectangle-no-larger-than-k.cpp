class Solution {
public:
    void help(vector<int> v, int &x, int k){
        int n = v.size();
        for(int i=0;i<n;i++){
            int curr = v[i];
            for(int j=i+1;j<n;j++){
                if(curr <= k){
                    x = max(x,curr);
                } curr += v[j];
            }
            if(curr <= k){
                x = max(x,curr);
            }
        }
    }
    int maxSumSubmatrix(vector<vector<int>>& matrix, int k) {
       int r = matrix.size();
       int ans = INT_MIN;
       if(r == 0) return 0;
       int c = matrix[0].size();
       if(c == 0) return 0;
    
        
        for(int i=0;i<r;i++){
            vector<int> v(c,0);
            for(int j=i;j<r;j++){
                for(int k=0;k<c;k++){
                    v[k] += matrix[j][k];
                }
                help(v,ans,k);
            }
        }
        return ans;
    }
};