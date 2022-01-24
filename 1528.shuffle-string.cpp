class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        char ans[100];
        for(int i=0;i<s.length();i++)
        {
            ans[indices[i]] = s[i];
        }
        string res="";
        for(int i=0;i<indices.size();i++)
            res.push_back(ans[i]);
        return res;
    }
};