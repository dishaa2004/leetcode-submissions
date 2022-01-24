class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int sum = 0;
        for(auto &k : nums) sum += k;
        
        if(sum&1) return 0;
        
        int tar = sum/2;
        int n = nums.size();
        vector<vector<int>> dp(n+1,vector<int>(tar+1));
        // Base
        for(int i=1;i<=tar;i++){
            dp[0][i] = 0;
        }
        for(int i=0;i<=n;i++){
            dp[i][0] = 1;
        }
        
        for(int i=1;i<=n;i++){
            for(int j=1;j<=tar;j++){
                if(nums[i-1] > j){
                    dp[i][j] = dp[i-1][j];
                }else{
                    if(dp[i-1][j] == 1 || dp[i-1][j-nums[i-1]] == 1){
                        dp[i][j] = 1;
                    }else{
                        dp[i][j] = 0;
                    }
                }
            }
        }
        return dp[n][tar];
    }
};