class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_map<string,int> mp;
        for(auto k : wordDict) mp[k]++;
        int n = s.size();
        vector<int> dp(n+1,0);
        dp[0] = 1;
        
        for(int i=1;i<=n;i++){
            int j = i-1;
            while(j>=0){
                if(dp[j] && mp[s.substr(j,i-j)]) dp[i] = 1;
                j--;
            }
        }
        
        return dp[n];
    }
};