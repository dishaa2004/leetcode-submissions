class Solution {
public:
    int addDigits(int num) {
        string p = to_string(num);
        if(p.size() == 1){
            return num;
        }else{
            int recur = 0;
            
            for(auto &k : p){
                recur += (k-'0');
            }
            
            return addDigits(recur);
        }
    }
};