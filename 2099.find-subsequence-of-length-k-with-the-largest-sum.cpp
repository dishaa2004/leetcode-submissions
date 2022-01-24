#define ll long long 
#define nl cout << "\n"
#define pb push_back
#define all(a) a.begin(),a.end()
class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        vector<pair<int,int>> vp,a;
        int i=0;
        for(auto &k : nums){
        	vp.push_back({k,i++});
        }
        sort(all(vp));
        reverse(all(vp));

        for(int i=0;i<k;i++){
        	a.push_back(vp[i]);
        }
        vector<int> ans;
        sort(all(a),[](const auto &a,const auto &b){
        	return a.second < b.second;
        });

        for(auto &k : a){
        	ans.pb(k.first);
        }
        return ans;
    }
};