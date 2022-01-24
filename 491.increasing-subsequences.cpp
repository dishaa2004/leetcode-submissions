class Solution {
public:
    vector<vector<int>> findSubsequences(vector<int>& nums) {
        set<vector<int>> ans;
        for(int i=0;i<(1 << nums.size());i++){
            vector<int> v;
            bool f = 1;
            for(int j=0;j<nums.size();j++){
                if(i & (1 << j)){
                    if(v.size() == 0){
                        v.push_back(nums[j]);
                    }else{
                       if(v.back() <= nums[j]){
                           v.push_back(nums[j]);
                       }else{
                           f = 0;
                       }
                    }
                }
            }
            if(f && v.size() >= 2){
                ans.insert(v);
            }
        }
        vector<vector<int>> ans1;
        for(auto &k : ans) ans1.push_back(k);
        return ans1;
    }
};