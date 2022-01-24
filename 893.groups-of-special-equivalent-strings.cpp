class Solution {
public:
    int numSpecialEquivGroups(vector<string>& words) {
        map<string,vector<string>> mp;
        for(auto &k : words){
            string even = "", odd = "";
            for(int l = 0; l < k.size(); l++){
                if(l&1) odd.push_back(k[l]);
                else even.push_back(k[l]);
            }
            sort(even.begin(),even.end());            
            sort(odd.begin(),odd.end());
            mp[even+odd].push_back(k);
        }
        // Grouping 
        for(auto &k : mp){
            cout << k.first << " : ";
            for(auto &k1 : k.second){
                cout << k1 << " ";
            }
            cout << endl;
        }
        
        return mp.size();
    }
};