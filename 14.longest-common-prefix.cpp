class Solution {
public:
    string longestCommonPrefix(vector<string>& v) {
        string s="";
        for(int i=0;i<v[0].size();i++){
            for(int j=0;j<v.size();j++){
                    if(v[j][i]!=v[0][i]){
                        return s;
                    }                    
            }
            s.push_back(v[0][i]);
        }
        return s;
    }
};