class RandomizedSet {
public:
    vector<int> v;
    map<int,int> mp;
    int idx;
    RandomizedSet() {
        idx = 0;
    }
    
    bool insert(int val) {
        if(mp.find(val) != mp.end()){
            return 0;
        }
        v.push_back(val);
        mp[val] = v.size()-1;
        return 1;
    }
    
    bool remove(int val) {
        if(mp.find(val) == mp.end()){
            return 0;
        }
        int idx1 = mp[val];
        // v.erase(v.begin()+idx1);
        // O(1) deletion can be done using swapping the last element
        
        swap(v.back(),v[idx1]);
        
        mp[v[idx1]] = mp[val];
        v.pop_back();
        
        mp.erase(val);
        return 1;
    }
    
    int getRandom() {
        return v[rand()%v.size()];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */