class FreqStack {
public:
    priority_queue<tuple<int,int,int>> pq;
    int t = 0;
    unordered_map<int,int> mp;
    FreqStack() {
        if(0){
            cout<<"Initialized";
        }
    }
    
    void push(int val) {
        mp[val]++;
        t++;
        pq.push({mp[val],t,val});
    }
    
    int pop() { 
     auto [a,b,c] = pq.top();
        mp[c]--;
        pq.pop();
        return c;
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */