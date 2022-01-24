class Solution {
public:
    bool squareIsWhite(string cc) {
        int check = cc[0]-'a'+cc[1]-'0'+1;
        //cout<<check<<endl;
        return check%2;
        
    }
};