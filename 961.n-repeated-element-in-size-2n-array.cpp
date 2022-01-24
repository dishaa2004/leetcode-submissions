class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int f = nums.size()/2;
        unordered_map<int,int> mp;
        for(int i=0;i<2*f;i++){
            mp[nums[i]]++;
            if(mp[nums[i]] == f){
                return nums[i];
            }
        }
        return -1;
    }
};