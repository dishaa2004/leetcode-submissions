class Solution {
public:
    int jobScheduling(vector<int>& startTime, vector<int>& endTime, vector<int>& profit) {
        vector<vector<int>> vp;
        int n = profit.size();
        for(int i=0;i<n;i++){
            vp.push_back({startTime[i],endTime[i],profit[i]});
        }
        sort(vp.begin(),vp.end(),[](const auto &a, const auto &b){
           return a[1]<b[1]; 
        });
        
        int dp[n];
        for(int i=0;i<n;i++){
            dp[i] = vp[i][2];
        }
        
        for(int i=1;i<n;i++){
            dp[i] = max(dp[i-1],vp[i][2]);
            for(int j=i-1;j>=0;j--){
                if(vp[j][1] <= vp[i][0]){
                    dp[i] = max(dp[j]+vp[i][2],dp[i]);break;
                }
            }
        }
        int ans = 0;
        for(int i=0;i<n;i++){
            ans = max(ans,dp[i]);
        }
        return ans;
    }
};