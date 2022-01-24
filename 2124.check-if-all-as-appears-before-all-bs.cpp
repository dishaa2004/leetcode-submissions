class Solution {
public:
    bool checkString(string s) {
        vector<int> a,b;
        int i = 0;
        for(auto &k : s){
            if(k == 'a') a.push_back(i);
            if(k == 'b') b.push_back(i);
                
                
            i++;
        }
        
        for(auto &k1 : a){
            for(auto &k2 : b){
                if(k1 > k2) return false;
            }
        }
        return true;
    }
};