class Solution {
public:
    string frequencySort(string s) {
        vector<pair<int,char>> vp;
        unordered_map<char,int> mp;
        for(char ch:s){
            mp[ch]++;
        }
        
        for(auto &k : mp){
            vp.push_back({k.second,k.first});
        }
        sort(vp.begin(),vp.end());
        reverse(vp.begin(),vp.end());
        string ans = "";
        for(int i=0;i<vp.size();i++){
            // cout<<vp[i].first<<" "<<vp[i].second<<"\n";
            string k = "";
            for(int z=0;z<vp[i].first;z++){
                k.push_back(vp[i].second);
            }
            ans += k;
        }
        
        
        return ans;
        
    }
};