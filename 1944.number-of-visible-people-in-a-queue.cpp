class Solution {
public:
    vector<int> canSeePersonsCount(vector<int>& heights) {
        int n = heights.size();
        vector<int> ans(n),st;
        for(int i=0;i<heights.size();i++){
            while(!st.empty() && heights[st.back()] <= heights[i])
                ans[st.back()]++,st.pop_back();
            
            if(!st.empty()){
                ans[st.back()]++;
            }
            
            st.push_back(i);
        }
        return ans;
    }
};