class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 0) return 0;
        int org = nums.size();
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i] == nums[i+1]){
                int p = i+1;
                while(p+1 < nums.size() && nums[p] == nums[p+1]) p++;
                nums.erase(nums.begin()+i,nums.begin()+p);
            }
        }
        int ans = nums.size();
        nums.resize(org);
        return ans;
    }
};