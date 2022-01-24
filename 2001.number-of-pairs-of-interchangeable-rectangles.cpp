#define ll long long
class Solution {
public:
    
    long long interchangeableRectangles(vector<vector<int>>& rectangles) {
        ll ans = 0;
        unordered_map<long double,ll> mp;
        
        ll n = rectangles.size();
        
        for(int i=0;i<n;i++){
            long double r = (long double)rectangles[i][0]/(long double)rectangles[i][1];
            mp[r]++;
        }
        for(auto &k : mp){
            ll v = k.second;
            if(v > 1) ans += (v*(v-1))/2;
        }
        return ans;
    }
};