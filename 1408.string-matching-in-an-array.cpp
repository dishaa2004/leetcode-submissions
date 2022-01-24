class Solution {
public:
int isSubstring(string str, string pattern)
{
    int str_length = str.length();
    int pattern_length = pattern.length();

    for (int i = 0; i <= str_length - pattern_length; i++)
    {
        int j;

        for (j = 0; j < pattern_length; j++)
            if (str[i+j] != pattern[j])
                break;

        if (j == pattern_length)
            return i;
    }
    return -1;
}
    vector<string> stringMatching(vector<string>& words) {
        set<string> ans;
        for(int i=0;i<words.size();i++)
        {
            for(int j=0;j<words.size();j++)
            {
                if(isSubstring(words[i],words[j]) != -1 && i!=j)
                    ans.insert(words[j]);
            }
        }
        vector<string> v;
        for(auto k:ans)
        {
           // cout<<k<<" ";
            v.push_back(k);
        }
        return v;
    }
};