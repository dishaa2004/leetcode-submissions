class Solution {
public:
    int maxDepth(string s) {
        int m = 0,p = 0 ;
        for(int i = 0; i< s.size(); i++)
        {
            if(s[i] == '(')
                p++;
            else if (s[i] ==')')
                p--;
            if (p > m)
                m = p;
        }
        return m;
    }
};