class Solution {
public:
    int maxDistance(vector<int>& A, vector<int>& B) {
        int n = A.size();
        int m = B.size();
        int res = -1e9;
        for(int i=0;i<A.size();i++){
            auto it = upper_bound(B.begin(), B.end(), A[i], greater<int>());
            int idx = it - B.begin() - 1;
            res = max(res, idx - i);

        }
        // cout << endl;
        return max(res,0);
    }
};