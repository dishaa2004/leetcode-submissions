class Solution {
public:
    int maximum69Number (int num) {
        string s = to_string(num);
        int pos;
        for(int i=0;i<s.length();i++)
        {
            if(s[i] == '6')
            {
                s[i] = '9';
                pos = i;
                break;
            }
        }
        stringstream GG(s);
        int n;
        GG>>n;
        return n;
    }
};