class Solution {
public:
    int reductionOperations(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans = 0;
        int idx = 1;
        for(int i=1;i<nums.size();i++){
            if(nums[i] == nums[0]) continue;
            
            if(nums[i] > nums[0]){
                ans += idx;
                
                if(i+1 < nums.size() && nums[i] != nums[i+1] ) idx++;
            }
        }
        return ans;
    }
};