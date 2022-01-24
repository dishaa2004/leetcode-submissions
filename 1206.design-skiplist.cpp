class Skiplist {
public:
    int v[50000]={0};
    Skiplist() {
        
    }
    
    bool search(int target) {
        return v[target] != 0;
    }
    
    void add(int num) {
        v[num]++;
    }
    
    bool erase(int num) {
        if(v[num] > 0){
            v[num]--;
            return true;
        }
        
        return false;
        
    }
};

/**
 * Your Skiplist object will be instantiated and called as such:
 * Skiplist* obj = new Skiplist();
 * bool param_1 = obj->search(target);
 * obj->add(num);
 * bool param_3 = obj->erase(num);
 */