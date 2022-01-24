class Solution {
public:
    string removeOuterParentheses(string S) {
        string ans = "";
        int cnt = 0;
        for(int i=0;i<S.length();i++)
        {
            if(S[i]=='(' && cnt++ > 0)
            {
                ans.push_back(S[i]);
            }
            else if(S[i]==')' && cnt-- > 1)
            {
                ans.push_back(S[i]);
            }
        }
        return ans;
    }
};