#define ll long long
#define ld long double
#define pb push_back
#define mem(a,x) memset(a,x,sizeof(a))
#define deb1(a) cout<<a<<"\n";
#define deb2(a,b) cout<<a<<" "<<b<<"\n";
#define all(a) a.begin(),a.end()
#define mine(a) *min_element(a.begin(),a.end())
#define maxe(a) *max_element(a.begin(),a.end())
#define sum(a) accumulate(a.begin(),a.end(),0ll)
#define popcnt(x) __builtin_popcount(x)
#define f(i,L,R) for (int i = L; i < R; i++)
#define fe(i,L,R) for (int i = L; i <= R; i++)
#define getFaster ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define pl pair<ll, ll>
#define vpl vector<pair<ll,ll>> 
#define vl vector<ll>
#define spl set<pair<ll,ll>>
#define ff first 
#define ss second
#define nl cout<<"\n"
#define en "\n"
const ll md = 1e9+7;
class Solution {
public:
    ll mod_pow(ll x,ll y){ll res = 1;x%=md;while(y){if(y&1)res = (res*x)%md;x *= x; if(x>=md) x %= md; y >>= 1;}return res;}
    int countGoodNumbers(long long n) {
        ll o = n/2,e;
        if(n%2 == 1) e = n/2 + 1; 
        else e = n/2;
        ll ans1 = mod_pow(4,o);
        ll ans2 = mod_pow(5,e);
        ll ans = (ans1*ans2)%md;
        return ans;
    }
};