class Solution {
public:
    int maximumScore(int a, int b, int c) {
        priority_queue<int> pq;
        pq.push(a);
        pq.push(b);
        pq.push(c);
        int ans = 0;
        while(pq.size()){
            int cur = pq.top(); pq.pop();
            if(pq.size() == 0){
                return ans;
            }else{
                int cur1 = pq.top(); pq.pop();
                ans += 1;
                if(cur-1 > 0)
                    pq.push(cur-1);
                if(cur1-1 > 0)
                    pq.push(cur1-1);
            }
        }
        return ans;
    }
};