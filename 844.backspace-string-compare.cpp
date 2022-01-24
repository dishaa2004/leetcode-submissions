class Solution {
public:
    bool backspaceCompare(string s, string t) {
        vector<char> s1,s2;
        for(auto &k : s){
            if(k == '#'){
                if(s1.size()){
                    s1.pop_back();
                }
            }else{
                s1.push_back(k);
            }
        }
        
        for(auto &k : t){
            if(k == '#'){
                if(s2.size()){
                    s2.pop_back();
                }
            }else{
                s2.push_back(k);
            }
        }
        
        return s1 == s2;
    }
};