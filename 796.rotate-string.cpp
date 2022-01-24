class Solution {
public:
    void RR(string &s){
        string k = s;
        
        char ch = k[0];
        for(int i=0;i<s.length()-1;i++){
            k[i] = k[i+1];
        }
        k[s.length()-1] = ch;
        
        s = k;
    }
    bool rotateString(string s, string goal) {
        int k = 1;
        while(k<s.length()){
            k++;
            RR(s);
            if(s == goal) return true;
        }
        return false;
    }
};