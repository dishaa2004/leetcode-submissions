#define sortoe(v)   sort(v.begin(),v.end(), [](int x,int y) { return x % 2 > y % 2; } );
class Solution {
public:
    vector<int> beautifulArray(int n) {
        vector<int> v(n);
        
        for(int i=0;i<n;i++){
            v[i] = i+1;
        }
        sortoe(v);
        sort(begin(v), end(v), [](auto & x, auto & y){ return -(x^y)&x&~y; });
        return v;
    }
};