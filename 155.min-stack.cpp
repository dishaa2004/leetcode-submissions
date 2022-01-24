class MinStack {
public:
    stack<pair<int,int>> st;
    MinStack() {
    }
    
    void push(int val) {
        if(st.size() == 0){
            st.push({val,val});
        }else{
            pair<int,int> last = st.top();
            st.push({val,min(last.second,val)});
        }
    }
    
    void pop() {
        if(st.size())
            st.pop();
        return;
    }
    
    int top() {
        return st.top().first;
    }
    
    int getMin() {
        return st.top().second;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */