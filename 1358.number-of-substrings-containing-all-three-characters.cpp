class Solution {
public:
    int numberOfSubstrings(string s) {
        unordered_map<char,int> mp;
        int i = 0, ans = 0;
        for(int j=0;j<s.size();j++){
            mp[s[j]]++;
            while(mp['a'] && mp['b'] && mp['c']){
                mp[s[i]]--;
                i++;
            }
            ans += i;
        }
        return ans;
    }
};