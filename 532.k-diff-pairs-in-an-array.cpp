class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
        int ans = 0;
        set<pair<int,int>> vp;
        for(int i=0;i<nums.size()-1;i++){
           for(int j=i+1;j<nums.size();j++){
               if(i!=j && abs(nums[i] - nums[j]) == k){
                   vp.insert({min(nums[i],nums[j]),max(nums[i],nums[j])});
               }
           }
        }
        return vp.size();
    }
};