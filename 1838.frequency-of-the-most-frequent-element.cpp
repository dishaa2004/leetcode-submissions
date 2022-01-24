class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
    int n = nums.size();
    sort(nums.begin(), nums.end());
        
    vector<long long> sum(n+1);
    for(int i=1;i<=n;i++)
    {
        sum[i] = sum[i-1] + nums[i-1];
    }
    int ans = 0,f=0;
    for(int i=1;i<=n;i++)
    {
        int tar = nums[i-1];
        int l = 1, r=i-1;
        while(l<=r)
        {
            int mid = (l+r)>>1;
            long long Now = sum[i-1]-sum[mid-1];
            long long Need = (long long)(i-mid)*tar;
            if(Need - Now > k)
                l = mid+1;
            else
                r = mid-1;
        }
        int cf = i-l+1;
        if(cf>f)
        {
            f = cf;
            ans = tar;
        }
    }
       
        return f;
    }
};