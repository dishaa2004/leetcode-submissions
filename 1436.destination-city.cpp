class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        map<string,int> mp;
        for(auto &k : paths){
            mp[k[0]]++;
        }
        
        for(auto &k : paths){
            string to = k[1];
            if(mp.find(to) == mp.end()){
                return to;
            }
        }
        return "";
    }
};