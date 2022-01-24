class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        map<int,int> mp;
        mp[0] = -1;
        int one = 0, zero = 0, ans = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i] == 1) one++;
            else zero++;
            
            if(mp.find(one - zero) != mp.end()){
                ans = max(ans, i - mp[one - zero]);
            }else{
                mp[one - zero] = i;
            }
        }
        return ans;
    }
};