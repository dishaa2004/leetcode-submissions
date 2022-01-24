class Solution {
public:
    vector<vector<int>> kSmallestPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        priority_queue<array<int,3>> pq;
        for(auto &a : nums1){
            for(auto &b : nums2){
                int s = a+b;
                if(pq.size() < k){
                    pq.push({a+b,a,b});
                }else if(s < pq.top()[0]){
                    pq.pop();
                    pq.push({s,a,b});
                }else{
                    break;
                }
            }
        }
        vector<vector<int>> ans;
        
        while(pq.size()){
            array<int,3> x = pq.top();
            pq.pop();
            ans.push_back({x[1],x[2]});
        }
        return ans;
    }
};