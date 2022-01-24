class Solution {
public:
    int help(vector<int>& nums) {
        int n = nums.size();
        if(n==1){
            return nums[0];
        }
        int dp[n];
        dp[0] = nums[0];
        dp[1] = max(nums[0],nums[1]);
        
        for(int i=2;i<n;i++){
            dp[i] = max(nums[i]+dp[i-2],dp[i-1]);
        }
        return dp[n-1];
        
    }
    
    int rob(vector<int>& nums) {
        if(nums.size()==1){
            return nums[0];
        }
        if(nums.size()==2){
            return max(nums[0],nums[1]);
        }
        if(nums.size()==3){
            return max({nums[0],nums[1],nums[2]});
        }
        if(nums.size()==4){
            return max({nums[2]+nums[0],nums[1]+nums[3]});
        }
        int a = nums[0];
        int b = nums[nums.size()-1];
        vector<int> p1((++nums.begin()),(nums.end()));
        vector<int> p2((nums.begin()),(--nums.end()));
        return max(help(p1),help(p2));
    }
};