class Solution {
public:
    bool judgeCircle(string moves) {
        int i=0;
        int j=0;
        
        for(auto &k : moves){
            if(k == 'U') i++;
            else if(k == 'D') i--;
            else if(k == 'L') j--;
            else j++;
        }
        return !i && !j;
    }
};