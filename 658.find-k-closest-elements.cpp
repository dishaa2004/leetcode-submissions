class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        for(auto &k : arr){
                pq.push({abs(k-x),k});
        }
        vector<int> ans;
        while(k>0 && pq.size()){
            k--;
            cout << (pq.top().second) << " ";
            ans.push_back(pq.top().second);
            pq.pop();
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};