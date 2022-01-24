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
#define godspeed ios_base::sync_with_stdio(false), cin.tie(nullptr)
#define pl pair<ll, ll>
#define vpl vector<pair<ll,ll>> 
#define vl vector<ll>
class Solution {
public:
    int help_please(ll mid,vector<int> v){
        ll s=0,rp=1; // Currently one painter

        f(i,0,v.size())
        {
            s+=v[i];
            if(s>mid){
                s=v[i];
                rp++;
            }
        }
        return rp; // req_painters
    }
    int minimizedMaximum(int n, vector<int>& A) {
        int left = 1, right = 100000;
        while (left < right) {
            int mid = (left + right) / 2, sum = 0;
            for (int a : A)
                sum += (a + mid - 1) / mid;
            if (sum > n)
                left = mid + 1;
            else
                right = mid;
        }
        return left;
    }
};