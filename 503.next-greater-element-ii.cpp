class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums2) {
        int n2 = nums2.size();
        int N = 2*n2;
        vector<int> nge(N);
        nums2.insert(nums2.end(),nums2.begin(),nums2.end());
        nge[N-1] = -1;
        stack<int> st;
        st.push(nums2[N-1]);
        for(int i=N-2;i>=0;i--){
            while(st.size()>0 && nums2[i] >= st.top()) st.pop();
            
            if(st.size() == 0) nge[i] = -1;
            else nge[i] = st.top();
            st.push(nums2[i]);
        }
        vector<int> ans;
        
        for(int i=0;i<n2;i++){
            ans.push_back(nge[i]);
        }
        return ans;
    }
};