class Solution {
public:
    int minimumEffort(vector<vector<int>>& tasks) {
        sort(tasks.begin(),tasks.end(),[](const auto &x, const auto &y){
            return abs(x[1]-x[0]) < abs(y[1]-y[0]); // Sorting based on difference
        });
        
        int ans = 0;
        for(auto &k : tasks){
            ans += k[0];
            if(ans < k[1]){
                ans += abs(k[1] - ans);
            }
        }
        return ans;
    }
};