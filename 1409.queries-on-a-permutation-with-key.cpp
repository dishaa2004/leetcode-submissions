class Solution {
public:
    vector<int> processQueries(vector<int>& q, int m) {
        map<int,int> mp;
        for(int i=1;i<=m;i++){
            mp[i] = i-1;
        }
        vector<int> ans(q.size());
        for(int i=0;i<q.size();i++){
            ans[i] = mp[q[i]];
            for(auto &k : mp){
                if(k.second < mp[q[i]])
                    k.second++;
            }
            mp[q[i]] = 0;
        }
        return ans;
    }
};