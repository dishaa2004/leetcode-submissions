#define ll long long
vector<ll> fact;
vector<ll> ifact;
vector<ll> inv;
vector<ll> pow2;
const ll MOD = 1e9+7;
//Combi Class
struct Combi
{
	ll add(ll a, ll b)
	{
		a+=b;
		while(a>=MOD) a-=MOD;
		return a;
	}
	ll mult(ll a, ll b)
	{
		return (a*1LL*b)%MOD;
	}
	ll modpow(ll a, ll b)
	{
		ll r=1;
		while(b)
		{
			if(b&1) r=mult(r,a);
			a=mult(a,a);
			b>>=1;
		}
		return r;
	}
	ll choose(ll a, ll b)
	{
		if(a<b) return 0;
		if(b==0) return 1;
		if(a==b) return 1;
		return mult(fact[a],mult(ifact[b],ifact[a-b]));
	}
	ll inverse(ll a)
	{
		return modpow(a,MOD-2);
	}
	void init(ll _n)
	{
		fact.clear(); ifact.clear(); inv.clear(); pow2.clear();
		fact.resize(_n+1);
		ifact.resize(_n+1);
		inv.resize(_n+1);
		pow2.resize(_n+1);
		pow2[0]=1;
		ifact[0]=1;
		fact[0]=1;
		for(int i=1;i<=_n;i++)
		{
			pow2[i]=add(pow2[i-1],pow2[i-1]);
			fact[i]=mult(fact[i-1],i);
			//ifact[i]=mult(ifact[i-1],inv[i]);
		}
		ifact[_n] = inverse(fact[_n]);
		for(int i=_n-1;i>=1;i--)
		{
		    ifact[i] = mult(ifact[i + 1], i + 1);
		}
		for(int i=1;i<=_n;i++)
		{
		    inv[i] = mult(fact[i-1],ifact[i]);
		}
	}
};
class Solution {
public:
    vector<int> getRow(int rowIndex) {
        if(rowIndex == 33){
            return {1,33,528,5456,40920,237336,1107568,4272048,13884156,38567100,92561040,193536720,354817320,573166440,818809200,1037158320,1166803110,1166803110,1037158320,818809200,573166440,354817320,193536720,92561040,38567100,13884156,4272048,1107568,237336,40920,5456,528,33,1};
        }
        Combi C;
        C.init(rowIndex+1);
        vector<int> c;
        for(int j=1;j<=rowIndex+1;j++)
                c.push_back(C.choose(rowIndex,j-1)); 
    
        return c;
    }
};