class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<vector<int>> ans;
        int n = nums.size();
        int pw = (1<<n);
        
        for(int i=0;i<pw;i++){
            vector<int> v;
            for(int j=0;j<n;j++){
                if(i&(1<<j)){
                    v.push_back(nums[j]);
                }
            }
            sort(v.begin(),v.end());
            ans.insert(v);
        }
        vector<vector<int>> realans;
        for(auto &k : ans) realans.push_back(k);
        
        return realans;
    }
};