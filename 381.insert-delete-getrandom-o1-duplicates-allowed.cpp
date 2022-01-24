class RandomizedCollection {
public:
    unordered_map<int,vector<int>> list;
    vector<int> set;
    RandomizedCollection() {
        list.clear();
        set.clear();
    }
    
    bool insert(int val) {
        bool res = false;
        if(list.find(val) == list.end()){
            res = true;
        }
        list[val].push_back(set.size());
        set.push_back(val);
        return res;
    }
    
    bool remove(int val) {
        if(list.find(val) == list.end()){
            return false;
        }
        
        int t_index = list[val][list[val].size() - 1];
        list[val].pop_back();
        
        int replaced_val = set[set.size() - 1];
        set[t_index] = replaced_val;
        set.pop_back();
        
        for(int i = 0; i < list[replaced_val].size(); i++){
            if(list[replaced_val][i] == set.size()){
                list[replaced_val][i] = t_index;
            }
        }
        
        if(list[val].size() == 0){
            list.erase(val);
        }
        return true;
    }
    
    int getRandom() {
        int n = rand()%(set.size());
        return set[n];
    }
};

/**
 * Your RandomizedCollection object will be instantiated and called as such:
 * RandomizedCollection* obj = new RandomizedCollection();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */