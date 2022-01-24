class Solution {
public:
    int balancedStringSplit(string s) {
        int l=0,r=0;
        
        int ans = 0;
        for(int i=0;i<s.length();i++){
            if(s[i] == 'L'){
                l++;
            }else{
                r++;
            }
            
            if(l == r && l > 0){
                ans++;
                l=0,r=0;
            }
        }
        return ans;
    }
};