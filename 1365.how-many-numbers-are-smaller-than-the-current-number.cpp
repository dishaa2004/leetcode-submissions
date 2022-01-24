class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n = nums.size();
        vector<int> Ans;
        for(int i=0;i<n;i++)
        {
            vector<int> v;
            for(int j=0;j<n;j++)
            {
                if(j!=i)
                {
                    v.push_back(nums[j]);
                }
            }
            int cnt=0;
            for(int k=0;k<v.size();k++)
            {
                if(v[k]<nums[i])
                    cnt++;
            }
            Ans.push_back(cnt);
            v.clear();
        }
        return Ans;
    }
};