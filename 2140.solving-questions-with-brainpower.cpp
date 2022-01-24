#define ll long long
class Solution {
public:
    ll dp[100005];
    ll help(int i, int n,vector<vector<int>> &nums){
        if(i >= n){
            return 0;
        }
        
        if(dp[i] != -1){
            return dp[i];
        }
        
        ll curval = nums[i][0];
        ll prevval = help(i+nums[i][1]+1,n,nums);
        ll totcur = curval + prevval;
        ll otheroption = help(i+1,n,nums);
        return dp[i] = max(totcur,otheroption);
    }
    long long mostPoints(vector<vector<int>>& nums) {
        memset(dp,-1,sizeof(dp));
        int n = nums.size();
        dp[0] = help(0,n,nums);
        return dp[0];
    }
};