class BrowserHistory {
public:
    stack<string> st;
    stack<string> fw;
    int curr;
    BrowserHistory(string homepage) {
        st.push(homepage);
    }
    
    void visit(string url) {
        st.push(url);
        while(!fw.empty()) 
            fw.pop();
    }
    
    string back(int steps) {
        while(steps-- && st.size() > 1)
        {
            string k1 = st.top();
            st.pop();
            fw.push(k1);
        }
        return st.top();
    }
    
    string forward(int steps) {

        while(steps-- && !fw.empty())
        {
        string k = fw.top();
        fw.pop();
        st.push(k);
        }
        return st.top();
    }
};

/**
 * Your BrowserHistory object will be instantiated and called as such:
 * BrowserHistory* obj = new BrowserHistory(homepage);
 * obj->visit(url);
 * string param_2 = obj->back(steps);
 * string param_3 = obj->forward(steps);
 */