class Solution {
public:
    void permutation(string ip,string op,vector<string>&str){
        if(ip.size()==0){
            str.push_back(op);
            return;
        }
        string op1=op;
        if(isalpha(ip[0])){  
            string op2=op;
            op1.push_back(toupper(ip[0]));
            op2.push_back(tolower(ip[0]));
            permutation(ip.substr(1),op2,str);
        }
        else op1.push_back(ip[0]);
        permutation(ip.substr(1),op1,str);
        return;
    }
    vector<string> letterCasePermutation(string s) {
        vector<string>str;
        permutation(s,"",str);
        return str;
    }
};