class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n = score.size();
        vector<string> ans(n);
        priority_queue<pair<int,int>> pq;
        for(int i=0;i<score.size();i++){
            pq.push({score[i],i});
        }
        vector<pair<int,int>> vp;
        int idx = 1;
        while(pq.size()){
            vp.push_back({pq.top().second,idx});idx++;
            pq.pop();
        }
        for(auto &k : vp){
            ans[k.first] = to_string(k.second);
            if(ans[k.first] == "1"){
                ans[k.first] = "Gold Medal";
            }else if(ans[k.first] == "2"){
                ans[k.first] = "Silver Medal";
            }else if(ans[k.first] == "3"){
                ans[k.first] = "Bronze Medal";
            }
        }
        return ans;
    }
};