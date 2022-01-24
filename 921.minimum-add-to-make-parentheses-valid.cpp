class Solution {
public:
    int minAddToMakeValid(string s) {
        int l=0,r=0;
        for(auto &k : s){
            if(k == '('){
                l++;
            }else{
                l--;
            }
            
            if(l == -1){
                l++;
                r++;
            }
        }
        return l+r;
    }
};