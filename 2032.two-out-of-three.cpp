class Solution {
public:
    vector<int> fc(vector<int>&a,vector<int>&b){
        set<int> a1,a2;
        for(auto &k : a) a1.insert(k);
        for(auto &k : b) a2.insert(k);
        
        unordered_map<int,int> mp;
        for(auto &k : a1) mp[k]++;
        for(auto &k : a2) mp[k]++;
        
        vector<int> ans;
        for(auto &k : mp){
            if(k.second >= 2){
                ans.push_back(k.first);
            }
        }
        return ans;
    }
    vector<int> twoOutOfThree(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3) { 
        vector<int> a1 = fc(nums1,nums2);
        vector<int> a2 = fc(nums2,nums3);
        vector<int> a3 = fc(nums1,nums3);
        
        set<int> ans;
        for(auto &k : a1) ans.insert(k);
        for(auto &k : a2) ans.insert(k);
        for(auto &k : a3) ans.insert(k);
        
        vector<int> realans;
        
        for(auto &k : ans){
            realans.push_back(k);
        }
        
        
        return realans;
    }
};