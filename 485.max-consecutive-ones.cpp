class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int cnt = 0,ans=0;
        for(int i=0;i<nums.size();i++){
            if(i == nums.size()-1 && nums[i] == 1){
                cnt++;
                ans = max(ans,cnt);
                break;
            }
            if(nums[i] == 1){
                cnt++;
            }else{
                // cout<<cnt<<" ";
                ans = max(ans,cnt);
                cnt = 0;
            }
        }
        return ans;
    }
};