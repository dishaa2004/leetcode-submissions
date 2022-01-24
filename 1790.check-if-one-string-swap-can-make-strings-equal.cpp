class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if(s1==s2)
            return 1;
        for(int i=0;i<s2.length();i++)
        {
            for(int j=0;j<s2.length();j++)
            {
                swap(s2[i],s2[j]);
                if(s1==s2)
                     return 1;
                else
                    swap(s2[i],s2[j]);
            }
        }
        return 0;
        
    }
};