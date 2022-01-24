class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& G) {
        int n = G.size();
        map<int,vector<int>> mp;
        
        for(int i=0;i<n;i++){
            mp[G[i]].push_back(i);
        }
        vector<vector<int>> ans;
        for(auto &k : mp){
            int i = 0;
            vector<int> v;
            while(i < k.second.size()){
                v.push_back(k.second[i]);
                if(v.size() == k.first){
                    ans.push_back(v);
                    v.clear();
                }
                i++;
            }
        }
        return ans;
    }
};