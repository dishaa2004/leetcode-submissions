class Solution {
public:
    int numberOfRounds(string login, string logout) {
        int a1 = 10*(login[0]-'0') + (login[1]-'0');        
        int b1 = 10*(logout[0]-'0') + (logout[1]-'0');
        int a2 = 10*(login[3]-'0') + (login[4]-'0');        
        int b2 = 10*(logout[3]-'0') + (logout[4]-'0');
        
//         a2 = 15*ceil(1.0*a2/15);

//         b2 = 15*floor(1.0*b2/15);       
        
        int a = 60*a1 + a2;
        int b = 60*b1 + b2;
        
        if(b < a) b += 24*60;
        
        return max(0, b / 15 - (a + 14) / 15);
        
    }
};