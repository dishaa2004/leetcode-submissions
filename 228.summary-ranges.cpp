class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        if(nums.size() == 0){
            return {};
        }else if(nums.size() == 1){
            return {to_string(nums[0])};
        }
        vector<string> ans;
        int s = nums[0]; int e = -1;
        for(int i=1;i<nums.size();i++){
            if(nums[i] == nums[i-1]+1){
                continue;
            }else{
                e = nums[i-1];
                if(e == s){
                    ans.push_back(to_string(s));
                }else{
                    ans.push_back(to_string(s) + "->" + to_string(e));
                }
                
                s = nums[i];
            }
        }
        e = nums[nums.size()-1];
        if(s == e){
            ans.push_back(to_string(s));
        }else{
            ans.push_back(to_string(s) + "->" + to_string(e));
        }
        
        return ans;
    }
};