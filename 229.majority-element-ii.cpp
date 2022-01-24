class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map<int,int> mp;
        int n = nums.size();
        for(int i=0;i< n;i++)
        {
            int inp = nums[i];
            mp[inp]++;
        }
        vector<int> v;
        for(auto k : mp)
        {
            if(k.second > (n/3))
                v.push_back(k.first);
        }
        return v;
        
    }
};