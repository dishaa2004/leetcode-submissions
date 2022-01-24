class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        vector<int> dp(n,0);
        for(auto &k : edges){
            dp[k[1]]++;
        }
        for(auto &k : dp){
            cout << k << ",";
        }
        vector<int> ans;
        int i = 0;
        for(auto &k : dp){
            if(k == 0){
                ans.push_back(i);
            }
            i++;
        }
        return ans;
    }
};