class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mp;
        int n2 = nums2.size();
        vector<int> nge(n2);
        nge[n2-1] = -1;
        stack<int> st;
        st.push(nums2[n2-1]);
        for(int i=n2-2;i>=0;i--){
            while(st.size()>0 && nums2[i] >= st.top()) st.pop();
            
            if(st.size() == 0) nge[i] = -1;
            else nge[i] = st.top();
            
            mp[nums2[i]] = nge[i];
            st.push(nums2[i]);
        }
        int n1 = nums1.size();
        vector<int> ans(n1);
        
        for(int i=0;i<n1;i++){
            ans[i] = mp[nums1[i]] == 0 ? -1 : mp[nums1[i]];
        }
        return ans;
        
    }
};