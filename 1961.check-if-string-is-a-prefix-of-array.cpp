class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        string w = "";
        for(int i=0;i<words.size();i++){
            w += words[i];
            if(w == s)
                return 1;
        }
        
        return 0;
    }
};