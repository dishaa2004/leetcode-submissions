#define ll long long int
class Solution {
public:
    int triangleNumber(vector<int>& A) {
        int ans = 0, n = A.size();
        sort(A.begin(),A.end());
        
        for(int last = n-1; last >= 0; last--){
            int lo = 0, hi = last-1;
            while(lo < hi){
                int sum  = A[lo] + A[hi];
                if(sum > A[last]){
                    ans += (hi-lo);
                    hi--;
                }else{
                    lo++;
                }
            }
        }
        
        return ans;
    }
};