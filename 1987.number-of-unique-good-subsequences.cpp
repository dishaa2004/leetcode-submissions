 const long long int mod = 1e9 + 7;
class Solution {
public:
    int numberOfUniqueGoodSubsequences(string s) {
            int total = 1, o = 0, z = 1;
            bool flag = 1;
            for(auto i: s){
                if(i == '0'){
                    flag = 0;
                    int save = total;
                    total = (2 * total - z)%mod;
                    total = (total + mod)%mod;
                    z += save - z;
                    total = (total + mod)%mod;
                }
                else{
                    total = (total + mod)%mod;
                    int save = total %mod;
                    total = (2 * total - o)%mod;
                    total = (total + mod)%mod;
                    o += save - o;
                }
            }
            return (total - flag)%mod;
    }
};