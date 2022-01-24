class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        cost.push_back(0);
        int dp[cost.size()];
        memset(dp,0,sizeof(dp));
        dp[0] = cost[0];
        dp[1] = cost[1];

        for(int i=2;i<cost.size();i++){
            dp[i] = min(cost[i]+dp[i-1],cost[i]+dp[i-2]);
        }
        return dp[cost.size()-1];
    }
};