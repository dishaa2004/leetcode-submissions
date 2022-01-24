class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int ans = 0;
        for(auto &k : mp){
            if(k.second == 1){
                ans += k.first;
            }
        }
        return ans;
    }
};