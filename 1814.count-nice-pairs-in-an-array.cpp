class Solution {
public:
    int rev(int k){
        string s = to_string(k);
        reverse(s.begin(),s.end());
        return stoi(s);
    }
    int countNicePairs(vector<int>& nums) {
        unordered_map<int,int> mp;
        long long ans = 0,md = 1e9+7;
        for(auto &k : nums){
            int l = k - rev(k);
            ans = (ans + mp[l])%md;
            mp[l]++;
        }
        return ans;
    }
};