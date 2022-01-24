class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0,j=0,k=t.size();
        
        while(j<k)
        {
            if(s[i] == t[j]){
                i++;
                j++;
            }else{
                j++;
            }
        }
        if(i == s.length()){
            return 1;
        }
        return 0;
    }
    
};