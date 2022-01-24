class Solution {
public:
    bool canJump(vector<int>& nums) {
        ios_base::sync_with_stdio(0);
        cin.tie(0); cout.tie(0);
        
        if(nums.size() == 1){
            return 1;
        }
        if(nums.size() == 2){
            if(nums[0] > 0){
                return 1;
            }
            return 0;
        }
        
        vector<int> dp(nums.size(),-1);
        dp[0] = nums[0];
        for(int i=1;i<nums.size();i++){
            if(dp[i-1] > 0){
                dp[i] = max(dp[i-1]-1,nums[i]);
            }
        }
        return dp[nums.size()-2] > 0;
    }
};