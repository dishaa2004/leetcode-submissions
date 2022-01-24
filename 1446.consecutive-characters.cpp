class Solution {
public:
    int maxPower(string s) {
        if(s.size() == 1){
            return 1;
        }
        
        if(s.size() == 2){
            if(s[0] == s[1]){
                return 2;
            }
            return 1;
        }
        
        if(s.size() == 3){
            if(s[0] == s[1] && s[0] == s[2]){
                return 3;
            }
            
            if(s[0] == s[1] || s[1] == s[2]){
                return 2;
            }
            return 1;
        }
        int mx = 1;
        for(int i=0;i<s.size();i++){
            int j = i;
            int ans = 1;
            while(j < s.size()-1 && s[j] == s[j+1]){
                ans++;
                j++;
            }
            mx = max(ans,mx);
        }
        return mx;
        
    }
};