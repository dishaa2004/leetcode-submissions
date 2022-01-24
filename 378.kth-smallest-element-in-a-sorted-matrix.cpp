class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int m = matrix.size();
        int n = matrix[0].size();
        priority_queue<int,vector<int>,greater<int>> pq;
        
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                pq.push(matrix[i][j]);
            }
            // cout << "\n";
        }
        k--;
        while(pq.size() && k > 0){
            pq.pop();
            k--;
        }
        
        return pq.top();
    }
};