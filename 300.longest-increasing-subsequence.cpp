class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n = nums.size();
        int dp[n];
        dp[0] = 1;
        int ans = 0;
        for(int i=1;i<n;i++){
            int m1 = 0;
            for(int j=0;j<i;j++){
                if(nums[j]<nums[i]){
                    m1 = max(m1,dp[j]);
                }
            }
            dp[i] = m1+1;
        }
        
        return *max_element(dp,dp+n);
    }
};