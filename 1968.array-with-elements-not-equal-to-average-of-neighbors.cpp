class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        
        vector<int> vec;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        int a = n-1;
        for(int i=0;i<n/2;i++){
            vec.push_back(nums[i]);
            vec.push_back(nums[a]);
            a--;
        }
        if(n&1) vec.push_back(nums[ceil(n/2)]);
        return vec;
    }
};