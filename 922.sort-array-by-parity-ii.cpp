class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int> ans(nums.size()),e,o;
        int i=0,j=0,k=0;
        for(auto &k : nums){
            if(k&1) o.push_back(k);
            else e.push_back(k);
        }
        
        for(k=0;k<nums.size();k++){
            if(k&1)
                ans[k] = o[j++];
            else 
                ans[k] = e[i++];
        }
        return ans;
    }
};