class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int> prefix;
        vector<int> suffix;
        int n = nums.size();
        int ele = 0;
        for(int i=0;i<n;i++){
            ele += nums[i];
            prefix.push_back(ele);
        }
        ele = 0;
        for(int i=n-1;i>=0;i--){
            ele+=nums[i];
            suffix.push_back(ele);
        }
        reverse(suffix.begin(),suffix.end());
        
        for(int i=0;i<n;i++) 
            if(prefix[i] == suffix[i]) return i;
        return -1;
    }
};