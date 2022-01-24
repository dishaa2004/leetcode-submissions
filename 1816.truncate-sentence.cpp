class Solution {
public:
    string truncateSentence(string s, int k) {
        string ans = "";int shift = 0;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==' ')
                shift++;
            if(shift == k)
                break;
            ans+=s[i];
        }
        return ans;
    }
};