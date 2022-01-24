class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        map<char,int> all;
        for(int i=0;i<allowed.size();i++)
        {
            all[allowed[i]]++;
        }
        int res = 0;
        for(int i=0;i<words.size();i++)
        {
            int k = 0;
            for(int j=0;j<words[i].size();j++)
            {
                if(all.find(words[i][j]) != all.end())
                {
                    k++;
                }
            }
            if(k == words[i].size())
                res++;
        }
       return res; 
    }
};