class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mp;
        for(auto &k : nums1) mp[k]++;
        
        vector<int> a;
        
        for(auto &k : nums2){
            if(mp[k] >= 1){
                a.push_back(k);
                mp[k]--;
            }
        }
        
        return a;
    }
};