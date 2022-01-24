class RLEIterator {
public:
    vector<int> rle;
    int cur = 1;
    int d = 0;
    RLEIterator(vector<int>& encoding) {
        
        rle = encoding;
        d = rle[0];
        
    }
    
    int next(int n) {
        d -= n;
        
        while(d < 0){
            cur+=2;
            if(cur >= rle.size()) return -1;
            d += rle[cur-1];
        }
        rle[cur-1] = d;
        return rle[cur];
    }
};

/**
 * Your RLEIterator object will be instantiated and called as such:
 * RLEIterator* obj = new RLEIterator(encoding);
 * int param_1 = obj->next(n);
 */