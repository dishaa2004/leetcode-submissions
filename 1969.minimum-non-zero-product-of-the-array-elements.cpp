#define ll long long
class Solution {
public:
    const ll mod = 1e9+7;
    ll mulmod(ll a, ll b)
    {
        ll r = 0;
        a = a % mod;
        while (b > 0)
        {
            if (b % 2 == 1)
                r = (r + a) % mod;
            a = (a * 2) % mod;
            b>>=1;
        }
        return r % mod;
    }
    ll modpow(ll a, ll b)
	{
		ll r = 1;
		if(b < 0) b += mod*100000LL;
		while(b)
		{
			if(b&1) r = (r*a)%mod;
            a = a%mod;
            a = mulmod(a,a);
			b>>=1;
		}
		return r;
	}
 
    int minNonZeroProduct(int p) {
        if(p==1) 
            return 1;
        
        ll n = pow(2,p);
        ll ans = mulmod((n-1),(modpow((n-2),(n-4)/2+1)))%mod;
        return ans;
    }
};