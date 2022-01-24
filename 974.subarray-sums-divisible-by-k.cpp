class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int ans = 0;
        // Pigeon Hole
        unordered_map<int,int> mp;
        mp[0]=1;
        int cur = 0;
        for(auto &k1 : nums){
            cur += k1;
            cur %= k;
            cur = (cur+k)%k;
            mp[cur]++;
        }
        
        for(int i=0;i<k;i++){
            ans += (mp[i])*(mp[i]-1)/2;
        }
        return ans;
    }
};