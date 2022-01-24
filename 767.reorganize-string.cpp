class Solution {
public:
    string reorganizeString(string s) {
        int n = s.size();
        priority_queue<pair<int,char>> pq;
        vector<int> f(26,0);
        for(auto &k : s){
            f[k-'a']++;
        }
        for(int i=0;i<26;i++){
            if(f[i] > (n+1)/2) return "";
            if(f[i]){
                pq.push({f[i],i+'a'});
            }
        }
        string ans = "";
        while(pq.size()){
            pair<int,char> cur = pq.top(); pq.pop();
            ans.push_back(cur.second);
            if(pq.size()){
                pair<int,char> cur1 = pq.top();pq.pop();
                ans.push_back(cur1.second);
                if(cur.first - 1 > 0) pq.push({cur.first-1,cur.second});
                if(cur1.first - 1 > 0) pq.push({cur1.first-1,cur1.second});
            }else{
                return ans;
            }
        }
        return ans;
    }
};