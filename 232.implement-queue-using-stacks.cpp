class MyQueue {
public:
    vector<int> v;
    int i = 0;
    MyQueue() {
        ///
    }
    
    void push(int x) {
        v.push_back(x);
    }
    
    int pop() {
        if(v.size()){
            int ans = v[0];
            v.erase(v.begin());
            return ans;
        }
        return -1;
    }
    
    int peek() {
        auto it = v.begin();
        return *it;
    }
    
    bool empty() {
        vector<int> v1 = {};
        return v1 == v;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */