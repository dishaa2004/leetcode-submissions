class Solution {
public:
    string convertToTitle(int x) {
        string ans = "";
        
        while(x--){
            ans.push_back('A'+x%26);
            x = x/26;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};