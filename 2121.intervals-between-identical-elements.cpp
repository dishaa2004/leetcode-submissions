#define ll long long
class Solution {
public:
    vector<long long> getDistances(vector<int>& arr) {
        int n = arr.size();
        map<ll,vector<ll>> mp;    
        for(int i=0;i<n;i++) mp[arr[i]].push_back(i);
        vector<ll> ans(n);
        for(auto &k : mp){
            vector<ll> cur = k.second;
            vector<ll> pre, suf(cur.size());
            ll x = 0;
            for(int i=0;i<cur.size();i++){
                x += cur[i];
                pre.push_back(x);
            }
            x = 0;
            for(int i=cur.size()-1;i>=0;i--){
                x += cur[i];
                suf[i] = x;
            }
            
            if(cur.size() == 1){
                ans[cur[0]] = 0;
                continue;
            }

            for(int i=0;i<cur.size();i++){
                if(i==0){
                    ans[cur[i]] = suf[i+1] - (cur.size()-1)*cur[i];
                }else if(i == cur.size()-1){
                    ans[cur[i]] = (cur.size()-1)*cur[i] - pre[i-1];
                }else{
                    long long int prev = pre[i-1];
                    long long int after = suf[i+1];
                    ans[cur[i]] = (i*cur[i]) - prev + after - ((cur.size()-i-1)*cur[i]); 
                }
            }
            
        }
        return ans;
    }
};