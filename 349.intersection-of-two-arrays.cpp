class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mp;
        vector<int>::iterator ip,ip1,an;
        ip = std::unique(nums1.begin(),nums1.begin() + nums1.size());
        nums1.resize(std::distance(nums1.begin(), ip));
        ip1 = std::unique(nums2.begin(),nums2.begin() + nums2.size());
        nums2.resize(std::distance(nums2.begin(), ip1));
        set<int> ans;
        for(int i=0;i<nums1.size();i++)
        {
            mp[nums1[i]]++;
        }
        for(int i=0;i<nums2.size();i++)
        {
            if(mp.find(nums2[i]) != mp.end())
                ans.insert(nums2[i]);
        }
        vector<int> realans;
        for(auto &k : ans)
        {
            realans.push_back(k);
        }
        return realans;
    }
};