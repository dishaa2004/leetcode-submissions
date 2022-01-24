class Solution {
public:
    int findLongestChain(vector<vector<int>>& pairs) {
        sort(pairs.begin(),pairs.end(),[](const auto &a, const auto &b){
            return a[1] < b[1];
        });
        
        int mx = -1e5;
        int ans = 0;
        for(auto &k : pairs){
            if(k[0] > mx){
                ans++;
                mx = k[1];
            }
        }
        return ans;
        
    }
};