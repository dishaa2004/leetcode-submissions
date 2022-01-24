class Solution {
public:
    bool mergeTriplets(vector<vector<int>>& triplets, vector<int>& target) {
        int ta = target[0];
        int tb = target[1];
        int tc = target[2];
        int n = triplets.size();
        bool a=0,b=0,c=0;
        
        
        for(auto &k : triplets){
            if(k[0] == ta){
                if(k[1] <= tb && k[2] <= tc){
                    a = 1;
                }
            }
        }
        
        for(auto &k : triplets){
            if(k[1] == tb){
                if(k[0] <= ta && k[2] <= tc){
                    b = 1;
                }
            }
        }
        
        for(auto &k : triplets){
            if(k[2] == tc){
                if(k[1] <= tb && k[0] <= ta){
                    c = 1;
                }
            }
        }
        
        return (a&b&c);
    }
};