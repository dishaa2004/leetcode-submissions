class Solution {
public:
    int findLucky(vector<int>& arr) {
        unordered_map<int,int> mp;
        for(int i=0;i<arr.size();i++)
        {
            mp[arr[i]]++;
        }
        vector<int> v;
        v.push_back(-1);
        for(auto k : mp)
        {
            if(k.first == k.second)
                v.push_back(k.first);
        }
        int max = *max_element(v.begin(),v.end());
        return max;
    }
};