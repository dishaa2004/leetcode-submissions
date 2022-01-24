class RecentCounter {
public:
    set <int> v;
    RecentCounter() {
        
    }
    
    int ping(int t) {
       v.insert(t);
       return distance(v.lower_bound(t - 3000), v.end());
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */