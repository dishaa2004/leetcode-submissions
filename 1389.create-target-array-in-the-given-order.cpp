class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> ans;
        
        for(int i=0;i<nums.size();i++){
            if(index[i] < ans.size()){
                ans.insert(ans.begin()+index[i],nums[i]);
            }
            else{
                ans.push_back(nums[i]);
            }
        }
        
        return ans;
    }
};