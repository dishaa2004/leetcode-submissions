class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> stk;
        int i=0, j=0;
        while(i<pushed.size()){
            stk.push(pushed[i]);
            while(!stk.empty() && j<popped.size() && stk.top()==popped[j]){
                stk.pop();
                j++;
            }
            i++;
        }
        return stk.empty()==1;
        
    }
};