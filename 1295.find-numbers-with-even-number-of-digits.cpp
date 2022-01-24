class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans = 0;
        for(int i=0;i<nums.size();i++){
            int ele = nums[i],cnt=0;
            string k = to_string(ele);
            if(k.size()%2==0){
                // cout<<k<<" ";
                ans++;
            }
        }
        return ans;
    }
};