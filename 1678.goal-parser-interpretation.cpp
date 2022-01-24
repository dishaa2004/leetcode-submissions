class Solution {
public:
    string interpret(string s) {
        string ans;
        for(int i=0;i<s.length();i++)
        {
            if(s[i] == '(' && s[i+1] == ')')
            {ans.push_back('o');i++;continue;}
            else if(s[i] != '(' && s[i] != ')')
                ans.push_back(s[i]);
        }
        return ans;
        
    }
};