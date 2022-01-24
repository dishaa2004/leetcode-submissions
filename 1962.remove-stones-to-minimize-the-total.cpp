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
    int minStoneSum(vector<int>& v, int k) {
        vector<int> pp(100001,0);
    
        for(int x:v) {
            pp[x]++;
        }

        int ans=0;
        for(int i=100000;i>=1;i--){
            int c=min(pp[i],k);
            pp[i]-=c;
            pp[(i+1)/2]+=c;
            k-=c;
            ans+=i*pp[i];
        }

        return ans;
    }
};