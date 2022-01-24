class Solution {
public:
    string generateTheString(int n) {
        string ans = "";
        if(n&1){
            while(n--){
                ans.push_back('a');
            }
        }else{
            ans.push_back('b');
            n--;
            while(n--){
                ans.push_back('a');
            }
        }
        return ans;
    }
};