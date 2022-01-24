class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> pq;
        for(auto &k : nums) pq.push(k);
        k--;
        while(pq.size() && k--) pq.pop();
        return pq.top();
    }
};