class Solution {
public:
    vector<vector<int>> twoSum(vector<int>& nums,int l,int r, int target) {
        
        vector<vector<int>> ans;
        int si = l;
        while(l<r){
            int sum = nums[l]+nums[r];
            if(l != si && nums[l] == nums[l-1]){
                l++;
                continue;
            }
            if(sum == target){   
                ans.push_back({nums[l],nums[r]});
                l++;
                r--;
            }else if(sum > target){
                r--;
            }else{
                l++;
            }
        }
        
        return ans;
    }
    
    vector<vector<int>> threeSum(vector<int>& nums) {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        int n = nums.size();
        if(n<3){
            return {};
        }
        
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++){
            if(i!=0 && nums[i] == nums[i-1]){
                continue;
            }
            int cur = nums[i];
            int tar = 0 - cur; // We search for real target - val
            vector<vector<int>> subans = twoSum(nums,i+1,nums.size()-1,tar);
            
            for(int i=0;i<subans.size();i++){
                subans[i].push_back(cur);
                ans.push_back(subans[i]);
            }
            
        }
        return ans;
    }
};