class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& F, vector<vector<int>>& S) {
        vector<vector<int>> ans;
        int i=0,j=0,f=F.size(),s=S.size();
        while(i<f and j<s){
            bool ok = F[i][1] >= S[j][0] and F[i][0] <= S[j][1];
            if(ok){
                int start = max(F[i][0],S[j][0]);
                int end = min(F[i][1],S[j][1]);
                ans.push_back({start,end});
            }
            if(F[i][1] < S[j][1]){
                i++;
            }else{
                j++;
            }
        }
        return ans;
    }
};