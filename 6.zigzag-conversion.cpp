class Solution {
public:
    string convert(string s, int r) {
        if(r==1) return s;
        vector<string> v(r,"");
        bool isdec = 0;
        int i=0,n = s.length();
        for(auto &k : s){
            v[i] += k;
            if(i==0 || i==r-1){
                isdec^=1;
            }
            isdec ? ++i : --i;
        }
        string ans = "";
        for(auto &k : v){
            ans += k;
        }
        
        return ans;
    }
};