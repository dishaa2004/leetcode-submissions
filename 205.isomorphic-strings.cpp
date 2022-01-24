class Solution {
public:
    bool isIsomorphic(string s, string t) {
        map<char,set<int>> mp1,mp2;
        for(int i=0;i<s.size();i++){
            mp1[s[i]].insert(t[i]);
            mp2[t[i]].insert(s[i]);
        }
            
        for(auto &k : mp1){
            if(k.second.size() > 1){
                return 0;
            }
        }
        
        for(auto &k : mp2){
            if(k.second.size() > 1){
                return 0;
            }
        }
        return 1;
    }
};