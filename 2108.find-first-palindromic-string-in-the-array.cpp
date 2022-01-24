class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(auto &k : words){
            
            if (k == string(k.rbegin(), k.rend())) {
                return k;
            }
        }
        return "";
    }
};