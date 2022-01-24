class Solution {
public:

    int threeSumClosest(vector<int>& nums, int target) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        int p=1;
        int diff = INT_MAX;
        for(int i=1; i<nums.size()-1; i++){
            for(int j=0; j<i; ++j){
                for(int k=nums.size()-1; k>i; --k){
                    if(diff >= abs(nums[i]+nums[j]+nums[k]-target)){
                        diff = abs(nums[i]+nums[j]+nums[k]-target);
                        if(nums[i]+nums[j]+nums[k]-target < 0) p=-1;
                        else p=1;
                    }
                }
            }
        }
        return diff*p+target;
    }
};