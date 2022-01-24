class Solution {
public:
    string addBinary(string a, string b) {
        int c = 0;
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        
        if(a.size() > b.size()){
            while(b.size() < a.size()){
                b.push_back('0');
            }
        }else{
            while(a.size() < b.size()){
                a.push_back('0');
            }
        }
        
        string ans = "";
        
        for(int i=0;i<a.size();i++){
            int aa = a[i] - '0';
            int bb = b[i] - '0';
            
            int s = aa+bb;
            if(s == 2 && c == 0){
                s = 0;
                c = 1;
            }else if(s == 2 && c == 1){
                s = 1;
                c = 1;
            }else if(s == 1 && c == 0){
                s = 1;
                c = 0;
            }else if(s == 1 && c == 1){
                s = 0;
                c = 1;
            }else if(s == 0 && c == 0){
                s = 0;
                c = 0;
            }else if(s == 0 && c == 1){
                s = 1;
                c = 0;
            }
            
            ans.push_back(s+'0');
            
        }
        
        if(c){
            ans.push_back('1');
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
    int numSteps(string s) {
        int ans = 0;
        while(s != "1"){
            if(s.back() == '0'){
                s.pop_back();
            }else{
                s = addBinary(s,"1");
            }
            ans++;
        }
        return ans;
    }
};