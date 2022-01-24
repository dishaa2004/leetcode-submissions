class Solution {
public:
    bool checkIfPangram(string s) {
        int n=s.length();
        map<char,int> mp;
        for(int i=0;i<n;i++)
        {
            mp[s[i]]++;
        }
        if(mp.size() ==26)
          return true;
        else
            return false;
    }
};