class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size();
        vector<int> dp(n,1e9);
        if(n == 1){
            return 0;
        }
        dp[0] = 0;
        
        for(int i=0;i<n;i++){
            int cur = nums[i];
            for(int j=1;j<=cur;j++){
                if(i+j < n){
                    dp[i+j] = min(dp[i+j],dp[i]+1);
                }
            }
            
        }
        
        return (dp[n-1]);
    }
};