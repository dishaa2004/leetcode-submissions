class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        vector<int> v;
        for(int i=0;i<s.length();i++)
        {
            if(s[i] == c)
            {
                v.push_back(i);
            }
        }
        vector<int> ans;
        for(int i=0;i<s.length();i++)
        {
            int minn;
            if(s[i] == c) ans.push_back(0);
            else
            {
                minn = abs(v[0]-i);
                for(int j=1;j<v.size();j++)
                {
                    
                    minn = min(minn,abs(v[j] - i));
                }
                ans.push_back(minn);
            }
        }
        return ans;
    }
};