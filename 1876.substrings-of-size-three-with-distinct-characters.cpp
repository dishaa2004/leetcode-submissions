class Solution {
public:
    int countGoodSubstrings(string s) {
        int cnt = 0,n = s.length();
        unordered_map<char , int > uml;
        for(int i=0;i<3;i++)
        {
            uml[s[i]]++;
        }
        if(uml.size() == 3)cnt++;
        
        for(int i=3;i<n;i++)
        {
            uml[s[i]]++;
            uml[s[i-3]]--;
            if(uml[s[i-3]] == 0)uml.erase(s[i-3]);
            
            if(uml.size() == 3)
              cnt++;
        }
      return cnt;
    }
};