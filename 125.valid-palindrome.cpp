class Solution {
public:
    bool isPalindrome(string s) {
        vector<char> v1;
        for(int i=0;i<s.length();i++){
            if(isalnum(s[i])){
                v1.push_back(tolower(s[i]));
            }
        }
        if(v1.size() == 0 || v1.size() == 1) return 1;
        
        vector<char> v2 = v1;
        reverse(v1.begin(),v1.end());
        return v1 == v2;
    }
};