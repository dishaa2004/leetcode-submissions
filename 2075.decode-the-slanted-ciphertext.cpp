class Solution {
public:
    string decodeCiphertext(string str, int rows) {
        int l = str.length();
        if(l == 0){
            return "";
        }
        int len = str.length();
        int arrlen = len/rows;
        
        vector<char> ans(len);
        
        for(int i=0;i<len;i++){
            ans[i] = '_';
        }
        
        int k = -1;
        int ni = 0;
        for(int i=0;i<arrlen;i++){
            ans[++k] = str[i];
            while(ni <= len){
                ni = ni + arrlen+1;
                if(ni < len){
                    ans[++k] = str[ni];
                }
            }
            ni = i+1;
        }
        string ok;
        for(auto &k : ans){
            if(k == '_')
                ok.push_back(' ');
            else
                ok.push_back(k);
        }
        
        while(ok.back() == ' ') ok.pop_back();
        return ok;
    }
};