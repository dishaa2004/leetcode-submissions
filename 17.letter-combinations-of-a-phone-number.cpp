class Solution {
public:
    vector<string> ans;
    void help(string s, int pos, string to,vector<string> &x){
        if(to.size() == s.size()){
            if(to.size())
                ans.push_back(to);
            return;
        }
        
        int cur = s[pos] - '0';
        for(auto &k : x[cur]){
            to.push_back(k);
            help(s,pos+1,to,x);
            to.pop_back();
        }
        
        return;
    }
    
    vector<string> letterCombinations(string d) {
        vector<string> x(10);
        x[2] = "abc";
        x[3] = "def";
        x[4] = "ghi";
        x[5] = "jkl";
        x[6] = "mno";
        x[7] = "pqrs";
        x[8] = "tuv";
        x[9] = "wxyz";
        help(d,0,"",x);
        return ans;
    }
};