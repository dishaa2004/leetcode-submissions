class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<int,int> mp;
        
        for(auto &k : s) mp[k]++;
        
        int ans = 0;
        for(auto &k : mp){
            int cur = k.second;
            ans += cur/2 * 2; // 5 -> 4
            
            if(ans % 2 == 0 && cur & 1){
                ans++;
            }
        }
        return ans;
    }
};