class CustomStack {
public:
    int sz;
    stack<int> st;
    stack<int> help;
    CustomStack(int maxSize) {
        sz = maxSize;
    }
    
    void push(int x) {
        if(st.size() < sz)
            st.push(x);
    }
    
    int pop() {
        if(st.empty()) return -1;
        
        int topp ;
        if(!st.empty())
        {
            topp = st.top();
            st.pop();
        }
        return topp;
    }
    
    void increment(int k, int val) {
        if(k >= sz){
            while(!st.empty()){
                help.push(st.top());
                st.pop();
            }
            
            while(!help.empty()){
                st.push(help.top() + val);
                help.pop();
            }
            
        }else{
            while(st.size() > k){
                help.push(st.top());
                st.pop();
            }
            while(!st.empty()){
                help.push(st.top()+val);
                st.pop();
            }
             while(!help.empty()){
                st.push(help.top());
                help.pop();
            }
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */