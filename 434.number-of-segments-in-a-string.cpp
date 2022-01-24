class Solution {
public:
    int countSegments(string s) {
        string k = "";
        int ans = 0;
        for(int i=0;i<s.size();i++){
            if(s[i] == ' '){
                if(k.size()){
                    ans ++;
                    k = "";
                }
            }else{
                k.push_back(s[i]);
            }
        }
        if(k.size()){
            ans ++;
            k = "";
        }
        return ans;
    }
};