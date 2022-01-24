class Solution {
public:
    unordered_map<string,bool> vis;
    bool dfs(double &qans,string start, string end,map<string,vector<string>> &mp,map<pair<string,string>,double> &mp1){
        if(start == end){
            return 1;
        }
        vis[start] = 1;
        for(auto &ele : mp[start]){
            if(!vis[ele]){
                qans *= mp1[{start,ele}];
                if(dfs(qans,ele,end,mp,mp1)){
                    return 1;
                }
                qans /= mp1[{start,ele}];
            }
        }

        return 0;
    }
    vector<double> calcEquation(vector<vector<string>>& G, vector<double>& V,          vector<vector<string>>& Q) {
        map<pair<string,string>,double> mp1;
        int i = 0;
        unordered_map<string,int> all;
        for(auto &k : G){
            all[k[0]]++;
            all[k[1]]++;
            mp1[{k[0],k[1]}] = V[i];
            mp1[{k[1],k[0]}] = 1.0/V[i];
            i++;
        }
        map<string,vector<string>> mp;
        
        for(auto &k : G){
            mp[k[0]].push_back(k[1]);
            mp[k[1]].push_back(k[0]);
        }

        vector<double> ans;
        for(auto &k :  Q){
            vis.clear();
            double qans = 1.0;
            bool cur = dfs(qans,k[0],k[1],mp,mp1);
            if(cur && (all.find(k[0]) != all.end()) && (all.find(k[1]) != all.end() ) ){
                ans.push_back(qans);
            }else{
                ans.push_back(-1.0);
            }
        }
        return ans;
        
    }
};