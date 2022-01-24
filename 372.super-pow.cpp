class Solution {
public:
    typedef long long ll;
    const int md = 1337;
    ll power(ll x,ll y){ll res = 1;x%=md;while(y){if(y&1)res =      (res*x)%md;x *= x; if(x>=md) x %= md; y >>= 1;}return           res;}
    int superPow(int a, vector<int>& b) {
        a = a%md;
        if(b.empty() == true) return 1;
        int last = b.back();
        b.pop_back();
        return power(a, last) * power(superPow(a, b), 10) % md;
        
    }
};