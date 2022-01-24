class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int r = mat.size();
        int c = mat[0].size();
        
        priority_queue<pair<int,int>> pq;
        for(int i=0;i<r;i++){
            int s = 0;
            for(int j=0;j<c;j++){
                s += (mat[i][j] == 1);
            }
            pq.push({s,i});
        }
        
        vector<int> indi;
        while(pq.size()){
            pair<int,int> p = pq.top();
            indi.insert(indi.begin(),p.second);
            cout << p.second << " ";
            pq.pop();
        }
        vector<int> ans(indi.begin(),indi.begin()+k);
        return ans;
    }
};