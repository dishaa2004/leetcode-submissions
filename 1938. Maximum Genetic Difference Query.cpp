#define pb push_back

struct node{
    int l=0;
    int r=0;
    int cnt=0;

};
 node a[1000005];
    int ptr=2;
class Btrie{
    public:
   
   void init(){
        for(int i=0;i<ptr;i++){
            a[i].l=0;
            a[i].r=0;
        }
        ptr=2;
    }
    void insert(int x){
        int cur=1;
        for(int i=17;i>=0;i--){
            if(x&(1<<i)){
                if(!a[cur].r){
                    a[cur].r=ptr++;
                }
                
                cur=a[cur].r;
                a[cur].cnt++;

            }
            else{
                if(!a[cur].l){
                    a[cur].l=ptr++;
                }
                cur=a[cur].l;
                a[cur].cnt++;
            }
        }
    }
    void remove(int x){
        int cur=1;
        for(int i=17;i>=0;i--){
            if(x&(1<<i)){
                
                
                cur=a[cur].r;
                a[cur].cnt--;

            }
            else{
                
                cur=a[cur].l;
                a[cur].cnt--;
            }
        }
    }
      int max_xor(int x){
        int ans=0, curr=1;
        for(int i=17;i>=0;i--){
            if((x&(1<<i))){
                if(a[curr].l && a[a[curr].l].cnt>0){
                    ans|=(1<<i);
                    curr=a[curr].l;
                }
                else{
                    curr=a[curr].r;
                }
            }
            else{
                if(a[curr].r && a[a[curr].r].cnt>0){
                    ans|=(1<<i);
                    curr=a[curr].r;
                }
                else{
                    curr=a[curr].l;
                }
            }
        }
        return ans;
    }

};
class Solution {
public:
    vector<vector<int>> adj;
    vector<Btrie> v;
    vector<int> ans;
    void dfs(int s,int p,Btrie &t,vector<vector<pair<int,int>>> &qs){
        t.insert(s);
        for(auto x:qs[s]){
            int p=t.max_xor(x.first);
            ans[x.second]=p;
        }
        
        for(auto x:adj[s]){
            if(x==p)continue;
            dfs(x,s,t,qs);
        }
        t.remove(s);
    }
    
    vector<int> maxGeneticDifference(vector<int>& p, vector<vector<int>>& q) {
        int n=p.size();
        adj.assign(n,vector<int>(0));
        v.resize(n);
        int s=-1;
        for(int i=0;i<n;i++){
            if(p[i]==-1){
                s=i;
                continue;
            }
            adj[p[i]].pb(i);
        }
        Btrie t=Btrie();
        t.init();
       
        ans.resize(q.size());
        vector<vector<pair<int,int>>> qs(n);
        int i=-1;
        for(auto x:q){
            i++;
            qs[x[0]].pb({x[1],i});
        }
         dfs(s,-1,t,qs);
        return ans;
        
    }
};