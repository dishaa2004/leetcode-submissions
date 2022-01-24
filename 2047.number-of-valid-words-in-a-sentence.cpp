class Solution {
public:
    bool ok(string s)
    {
        if(s == " " || s == "  "){
            return 0;
        }
        int p=0,z=0;
        for(int i=0;i<s.size();i++){
            char k = s[i];
            if(k == ',' || k == '!' || k == '.'){
                z++;
                if(i == s.size()-1){
                    
                }else{
                    return 0;
                }
            }
            
            if(k >= '0' && k <= '9'){
                return 0;
            }
            
            if(k == '-' && (i == 0 || i == s.size()-1) ){
                p++;
                return 0;
            }
            
            if(k == '-'){
                p++;
                if(islower(s[i-1]) && islower(s[i+1])){
                    
                }else{
                    return 0;
                }
            }
            
        }
        if(p>1 || z>1) return 0;
        return 1;
    }
    int countValidWords(string sentence) {
        // string st = "";
        int ans = 0;
        // for(auto &k : sentence){
        //     if(k == ' ' && st != ""){
        //         cout << st << " ";
        //         if(ok(st)) ans++;
        //         st = "";
        //     }else{
        //         st.push_back(k);
        //     }
        // }
        // cout << st << endl;
        // if(ok(st)) ans++;
        // return ans;
        string w;
        stringstream pp(sentence);
        while (pp >> w)
            if(ok(w)) ans++;
        return ans;
    }
};