class Solution {
public:
    int ok(vector<int>&pl, int n, int sz, int c, int cw){
        if(pl.size() == 0){
            return n;
            
        }
        
        if(pl[0] > cw){
            cw = c;
            n += (sz - pl.size())*2;
        }
        
        cw = cw - pl[0];
        pl.erase(pl.begin());
        
        return ok(pl,n+1,sz,c,cw);
    }
    int wateringPlants(vector<int>& plants, int capacity) {
        int sz = plants.size(), n = 0;
        
        n = ok(plants,n,sz,capacity,capacity);
        
        return n;
    }
};