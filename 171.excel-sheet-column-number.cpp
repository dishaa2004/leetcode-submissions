class Solution {
public:
    int titleToNumber(string c) {
        reverse(c.begin(),c.end());
        
        int ans = 0;
        for(int i=0;i<c.size();i++){
            int n = c[i] - 'A' + 1;
            ans += pow(26,i)*n;
        }
        return ans;
    }
};