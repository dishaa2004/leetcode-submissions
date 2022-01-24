class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n = nums.size(),sum = 0;
        unordered_map<int,int> mp;
        mp[0] = -1; 
        for(int i = 0; i < n; i++){
            sum += nums[i];
            if(k)
                sum = sum % k;
            
            if(mp.find(sum) != mp.end()){
                if(i - mp[sum] > 1)
                    return true;
            }
            else
                mp[sum] = i;
        }
        return false;
    }
};