class Solution {
public:
    string replaceDigits(string s) {
        string ans = "";
        for(int i=0;i<s.length();i++)
        {
            if(i&1)
               ans.push_back(s[i]-'0'+s[i-1]);
            else
                ans +=s[i];
        }
        
        return ans;
    }
};