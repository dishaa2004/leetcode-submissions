class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();
        int A[n+1];
        memset(A,0,sizeof(A));
        for(int i=0;i<n;i++)
        {
            A[i+1] = gain[i];
        }
        for(int i=0;i<n;i++)
        {
            A[i+1]+=A[i];
        }
        return *max_element(A,A+n+1);
    }
};