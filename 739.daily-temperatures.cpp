class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& T) {
        vector<int> nge(T.size());
        stack<int> st;
        
        for(int i=0;i<T.size();i++){
            while(st.size() && T[st.top()] < T[i]){
                nge[st.top()] = i - st.top();
                st.pop();
            }
            st.push(i);
        }
        
        while(st.size()){
            nge[st.top()] = 0;
            st.pop();
        }
        
        return nge;
        
    }
};