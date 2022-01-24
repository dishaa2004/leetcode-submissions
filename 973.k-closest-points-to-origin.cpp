class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& p, int k) {
        sort(p.begin(),p.end(),[](const auto &a, const auto &b){
            return (a[0]*a[0] + a[1]*a[1]) < (b[0]*b[0] + b[1]*b[1]);
        });
        
        vector<vector<int>> ans(p.begin(),p.begin()+k);
        return ans;
        
    }
};