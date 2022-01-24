class MyCalendarThree {
public:
    map<int,int> mp;
    MyCalendarThree() {
        
    }
    
    int book(int s, int e) {
        mp[s]++,mp[e]--;int ans = 0;
        int f = 0;
        for(auto &k : mp){
            f += k.second;
            ans = max(f,ans);
        }
        return ans;
    }
};

/**
 * Your MyCalendarThree object will be instantiated and called as such:
 * MyCalendarThree* obj = new MyCalendarThree();
 * int param_1 = obj->book(start,end);
 */