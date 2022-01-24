class Solution {
public:
    vector<string> ans;
    void help(int o, int c,string& cur, int tot){
        int uo = tot - o;
        int uc = tot - c;
        
        if(o == 0 && c == 0){
            ans.push_back(cur);
            return;
        }
        
        if(o > 0){
            cur.push_back('(');
            help(o-1,c,cur,tot);
            cur.pop_back();                   
        }
        
        if(c > 0 && uo > uc){
            cur.push_back(')');
            help(o,c-1,cur,tot);
            cur.pop_back();
        }
        
        return;
    }
    vector<string> generateParenthesis(int n) {
        int open = n;
        int close = n;
        string cur = "";
        help(open,close,cur,n);
        return ans;
    }
};