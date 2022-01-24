class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int i = -1;
        int j = -1;
        if(binary_search(nums.begin(),nums.end(),target) == 0){
            return {i,j};
        }
        
        i = lower_bound(nums.begin(),nums.end(),target) - nums.begin();
        j = upper_bound(nums.begin(),nums.end(),target) - nums.begin();
        
        if(j == nums.size() || nums[j] != target) j--;
        
        return {i,j};
    }
};