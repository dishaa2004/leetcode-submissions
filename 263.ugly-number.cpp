class Solution {
public:
    vector<int> fact = {2,3,5};
    
    bool isUgly(int n) {
        
        if(n == 1){
            return 1;
        }
        if(n <= 0){
            return 0;
        }
        
        for(auto &k : fact){
            if(n%k == 0)
                return isUgly(n/k);
        }
        return false;
    }
};