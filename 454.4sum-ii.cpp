class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        int ans = 0;
        unordered_map<int,int> mp;
        for(auto &k : nums1){
            for(auto &p : nums2){
                mp[k+p]++;
            }
        }
        
        for(auto &k : nums3){
            for(auto &p : nums4){
                int sum = k+p;
                if(mp.find(-1*sum) != mp.end()){
                    ans += mp[-sum];
                }
                // mp[sum]++;
            }
        }
        return ans;
    }
};