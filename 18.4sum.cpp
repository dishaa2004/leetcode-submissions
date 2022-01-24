#define pb push_back
#define ll long long
#define ld long double
#define pb push_back
#define all(a) a.begin(),a.end()
#define mine(a) *min_element(a.begin(),a.end())
#define maxe(a) *max_element(a.begin(),a.end())
#define sum(a) accumulate(a.begin(),a.end(),0ll)
#define f(i,L,R) for (int i = L; i < R; i++)
#define fe(i,L,R) for (int i = L; i <= R; i++)
#define getFaster ios_base::sync_with_stdio(false), cin.tie(nullptr)
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        getFaster;cout.tie(nullptr);
        int n=nums.size();
        vector<vector<int>> res;
        if(n<4) return res;
        sort(all(nums));
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int comp = target - nums[i] - nums[j];
                
                int lo = j+1, hi = n-1;
                while(lo < hi){
                    if(nums[lo] + nums[hi] == comp)
                    {
                        int a=nums[lo],b=nums[hi];
                        res.pb({nums[i],nums[j],a,b});
                         //skip the duplicates
                        while(lo< hi && nums[lo]==a)  lo++;
                        
                          while(lo < hi && nums[hi]==b)   hi--;
                        
                    } else if(nums[lo]+nums[hi] < comp)  lo++;
                     
                    else if(nums[lo]+nums[hi] > comp)   hi--;
                     // skip the duplicates of i and j
                    while(i+1 < n && nums[i+1]==nums[i])    i++;
                    while(j+1 < n && nums[j+1]==nums[j])    j++;
                }
            }
        }
        return res;
    }
};