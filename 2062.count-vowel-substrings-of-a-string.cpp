class Solution {
public:
    
    bool ok (string p){
        bool a=0,e=0,i=0,o=0,u=0;
        for(auto &k : p){
             if(k == 'a') a = 1;
             else if(k == 'e') e = 1;
             else if(k == 'i') i = 1;
             else if(k == 'o') o = 1;
             else if(k == 'u') u = 1;
            else return 0;
        }
        return (a && e && i && o && u);
    }
    
    int countVowelSubstrings(string word) {
        int ans = 0;
        int n = word.size();
        for (int j = 1; j <= n; j++)
        {   
            for (int i = 0; i <= n - j; i++)
            {
                int z = i + j - 1;  
                string p = "";
                for (int k = i; k <= z; k++){
                    p.push_back(word[k]);
                }
                
                if(ok(p)){
                    cout << p << " ";
                    ans ++;
                }
            }
        }
        return ans;
    }
};