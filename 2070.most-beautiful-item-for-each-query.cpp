class Solution {
public:
    vector<int> maximumBeauty(vector<vector<int>>& items, vector<int>& queries) {
        
        if(items.size() == 1){
            vector<int> ans;
            
            int p = items[0][0];
            int v = items[0][1];
            
            for(int i=0;i<queries.size();i++){
                if(queries[i] >= p){
                    ans.push_back(v);
                }else{
                    ans.push_back(0);
                }
            }
            
            return ans;
        }
        
        map<int,int> mp;
        sort(items.begin(),items.end());
        int mx = 0;
        for(auto &k : items){
            mx = max(mx,k[1]);
            mp[k[0]] = max(mx,k[1]);
        }
        
        vector<int> ans;
        for(auto &k : queries){
            auto it = mp.lower_bound(k+1);
            --it;
            ans.push_back(it->second);
        }
        return ans;
    }
};