class Solution {
public:
    int minMoves(vector<int>& nums) {
        map<int,int> mp;
        for(auto &k : nums) mp[k]++;
        
        if(mp.size() == 1){
            return 0;
        }
        int ans = 0, mn = *min_element(nums.begin(),nums.end());
        for(auto &k : nums){
            ans += k-mn;
        }
        return ans;
    }
};