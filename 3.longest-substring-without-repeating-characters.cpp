class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans = 0;
        for(int i=0;i<s.size();i++){
            unordered_map<char,int> mp;
            int mx  = 0;
            for(int j = i; j < s.size(); j++){
                mp[s[j]]++;
                if(mp[s[j]] == 2) break;
                else mx++;
            }
            ans = max(mx,ans);
        }
        return ans;
    }
};