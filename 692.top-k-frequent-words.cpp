class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        map<string,int> mp;
        for(auto &k : words){
            mp[k]++;
        }
        vector<pair<int,string>> vp;
        for(auto &k : mp){
            vp.push_back({k.second,k.first});
        }
        sort(vp.begin(),vp.end(),[](const auto &a, const auto &b){
            if(a.first == b.first){
                return a.second < b.second;
            }
            return a.first > b.first;
        });
        
        vector<string> ans;
        int idx = 0;
        while(k--){
            ans.push_back(vp[idx++].second);         
        }
        // sort(ans.begin(),ans.end());
        return ans;
    }
};