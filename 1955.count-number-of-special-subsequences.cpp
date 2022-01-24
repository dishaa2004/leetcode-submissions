class Solution {
public:
    const long long mod = 1e9+7;
    int countSpecialSubsequences(vector<int>& A) {
        int ca=0,cb=0,cc=0;
        for(int i=0;i<A.size();i++)
        {
            if(A[i] == 0)
                ca=(1+(ca*2)%mod)%mod;
            else if(A[i] == 1)
                cb=(ca+(2*cb)%mod)%mod;
            else    
                cc=(cb+(2*cc)%mod)%mod;
        }
        return cc%mod;
    }
};