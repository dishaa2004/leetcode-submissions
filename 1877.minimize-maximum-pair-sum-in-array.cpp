class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<pair<int,int>> v;
        for (int i = 0, j = nums.size()-1; i <= j; i++, j--)
        {
            v.push_back({nums[i],nums[j]});
        }
        int Max = INT_MIN;
        for(int i=0;i<v.size();i++)
        {
            if(v[i].first + v[i].second > Max)
                Max = v[i].first + v[i].second;
        }
        return Max;
    }
};