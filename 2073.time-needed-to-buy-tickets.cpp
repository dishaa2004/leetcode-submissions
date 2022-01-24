class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        queue<array<int,2>> q;
        
        for(int i=0;i<tickets.size();i++){
            q.push({tickets[i],(i==k)});
        }
        int ans = 1;
        
        while(q.size()){
            array<int,2> cur = q.front();q.pop();
            ans++;
            if(cur[0] == 1 && cur[1] == 1){
                break;
            }else if(cur[0] > 1){
                q.push({cur[0]-1,cur[1]});
            }
        }
        return ans - 1;
    }
};