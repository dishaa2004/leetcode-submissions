#define ll long long
#define MAXN 10001
vector<ll> t;
struct Fenwick
{
    Fenwick(int n)
    {
        t.assign(2*MAXN,0);
    }
    void reset(int n)
    {
		t.assign(n+1, 0);
	}
    void update(int p, ll v)
    {
        for (; p < (int)t.size(); p += (p&(-p))) t[p] += v;
    }
    ll query(int r) //finds [1, r] sum
    {                     
        ll sum = 0;
        for (; r; r -= (r&(-r))) sum += t[r];
        return sum;
    }
    ll query(int l, int r) //finds [l, r] sum
    {
		if(l == 0) return query(r);
		return query(r) - query(l-1);
	}
};

class Solution {
public:
    vector<int> countSmaller(vector<int>& nums) {
        int n = nums.size();
        Fenwick ff(n);
        for(int i=n-1;i>=0;i--){
            ff.update(MAXN + nums[i],1);
            nums[i] = ff.query(MAXN + nums[i] - 1);
        }
        return nums;
    }
};