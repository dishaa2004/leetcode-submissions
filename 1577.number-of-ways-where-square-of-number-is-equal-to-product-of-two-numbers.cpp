#define ll long long int
class Solution {
public:
    int numTriplets(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<ll,ll> mp;
        for(auto &k : nums1) mp[1ll*k*k]++;
        ll type1 = 0, type2 = 0;
        for(int i=0;i<nums2.size();i++){
            for(int j=i+1;j<nums2.size();j++){
                if(mp.find(1ll*nums2[i]*nums2[j]) != mp.end()) type1+=mp[1ll*nums2[i]*nums2[j]];
            }
        }
        mp.clear();
        
        for(auto &k : nums2) mp[1ll*k*k]++;
        for(int i=0;i<nums1.size();i++){
            for(int j=i+1;j<nums1.size();j++){
                if(mp.find(1ll*nums1[i]*nums1[j]) != mp.end()) type2+=mp[1ll*nums1[i]*nums1[j]];
            }
        }
        
        
        return type1 + type2;
    }
};