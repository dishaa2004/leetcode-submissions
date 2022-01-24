class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool> ans;
        for(int i=0;i<l.size();i++){
            
            int left = l[i],right = r[i];
            if(right - left + 1 < 2){
                ans.push_back(false);
                continue;
            }
            vector<int> v;
            for(int j=left;j<=right;j++){
                v.push_back(nums[j]);
            }
            sort(v.begin(),v.end());
            bool flag = true;
            int d = v[1] - v[0];
            for(int j=2;j<v.size();j++){
                if(d != (v[j] - v[j-1]))
                {
                    flag = false;
                    break;
                }
            }
            ans.push_back(flag);
        }
        return ans;
    }
};