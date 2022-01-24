class StockSpanner {
public:
    stack<int> st;
    vector<int> v;
    int f=0,idx=0;
    StockSpanner() {
        st.push(0);
    }
    
    int next(int price) {
        if(f==0){
            f=1;
            st.push(0);
            v.push_back(price);
            return 1;
        }
        int ans;
        idx++;
        while(!st.empty() && v[st.top()] <= price){
            st.pop();
        }
        if(st.empty()){
            ans = idx+1;
        }else{
            ans = idx-st.top();
        }
        st.push(idx);
        v.push_back(price);
        return ans;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */