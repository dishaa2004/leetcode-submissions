#define ll long long
#define ld long double
#define pb push_back
#define mem(a,x) memset(a,x,sizeof(a))
#define deb1(a) cout<<a<<"\n";
#define deb2(a,b) cout<<a<<" "<<b<<"\n";
#define all(a) a.begin(),a.end()
#define mine(a) *min_element(all(a))
#define maxe(a) *max_element(all(a))
#define sum(a) accumulate(all(a),0ll)
#define f(i,L,R) for (int i = L; i < R; i++)
#define fe(i,L,R) for (int i = L; i <= R; i++)
#define getFaster ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define pl pair<ll, ll>
#define vpl vector<pair<ll,ll>> 
#define vl vector<ll>
#define spl set<pair<ll,ll>>
#define ff first 
#define ss second

const ll md = 1e9+7;



class Solution {
public:
    int minSwaps(string s) {
    ll sz = s.length();
    ll o=0,cc=0;
    f(i,0,sz) {
        if (s[i] == '['){
            o++;
        }
        else {
            if (!o)
                cc++;
            else
                o--;
        }
    }
    ll res = (cc/2)+(o/2);
    cc %= 2;
    o %= 2;
    if (cc) res += 2;
 
    return res/2;
    }
};