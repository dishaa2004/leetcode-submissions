class Solution {
public:
    int numOfSubarrays(vector<int>& arr) {
        long long mod = 1000000007;
        long long cnt=0,n=arr.size();
        bool o=0;
        for(int i=0;i<n;i++)
        {
            if(arr[i]%2==1)
                o = !o;
            if(o)
                cnt++;
        }
        long long cntt=0;
        for(int j=0;j<n;j++)
        {
            cntt+=cnt;
            if(arr[j]%2==1)
                cnt = n-j-cnt;
        }
        return cntt%mod;
    }
};