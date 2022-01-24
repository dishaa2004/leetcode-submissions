#define ll long long int
class Solution {
public:
    ll help(ll n,ll cnt){
        if(n == 1) return cnt;
        
        if(n&1){
            return min(help(n+1,cnt+1),help(n-1,cnt+1));
        }else{
            return help(n/2,cnt+1);
        }
    }
    int integerReplacement(int n) {
        ll cnt = 0;
        ll ans = help(n,cnt);
        return ans;
    }
};