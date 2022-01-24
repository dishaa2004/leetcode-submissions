class Solution {
public:
    char findTheDifference(string s, string t) {
        map<char,int> mp1,mp2;
        
        for(auto &k : s) mp1[k]++;
        for(auto &k : t) mp2[k]++;
        
        for(auto &k : s){
            if(mp1[k] == mp2[k]){
                continue;
            }else{
                return k;
            }
        }
        
        for(auto &k : t){
            if(mp1[k] == mp2[k]){
                continue;
            }else{
                return k;
            }
        }
        char ch;
        return ch;
    }
};