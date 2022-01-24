const int dx[] = {0,1,-1,0};
const int dy[] = {1,0,0,-1};
class Solution {
public:
    bool ok(int i, int j, int n){
        if(i < 0 || j < 0 || i >= n || j >= n) return 0;
        return 1;
    }
//     void dfs(int x, int y, int n,vector<pair<pair<int,int>,char>> &v,map<pair<int,int>,char> mp1){
       
        
//         for(int i=0;i<4;i++){
//             int x1 = x+dx[i];
//             int y1 = y+dy[i];
//             if(ok(x1,y1,n)){
//                 vis[x][y] = 1;
//                 v.push_back({ {x,y} , mp1[{dx[i],dy[i]}]});
//                 dfs(x1,y1,n,v,mp1);
//                 vis[x][y] = 0;
//             }
//         }
//     }
    
    vector<int> executeInstructions(int n, vector<int>& S, string s) {
//         vector<pair<pair<int,int>,char>> v;
        map<pair<int,int>,char> D;
        D[{0,1}] = 'R';
        D[{1,0}] = 'D';
        D[{-1,0}] = 'U';
        D[{0,-1}] = 'L';
//         int x = S[0];
//         int y = S[1];
//         dfs(x,y,n,v,mp1);
//         map<pair<int,int>,set<char>> mp;
//         for(auto &k : v){
//             mp[{k.first.first,k.first.second}].insert(k.second);
//             // cout << "point : " << k.first.first <<"," << k.first.second << endl;
//             // cout << "direction : " << k.second << endl;
//         }
        
//         for(auto &k : mp){
//             cout << "point : "<< k.first.first <<"," << k.first.second << " ";
//             for(auto &p : k.second){
//                 cout << p << " ";
//             }
//             cout << endl;
//         }
        
        vector<int> ans(s.size());
        for(int i=0;i<s.size();i++){
            int x1 = S[0], y1 = S[1];
            int len = 0;
            for(int j=i;j<s.size();j++){
                char cur = s[j];
                bool flag = 0;
                int a1,a2;
                for(int dir = 0; dir < 4; dir++){
                    int x2 = x1+dx[dir];
                    int y2 = y1+dy[dir];
                    if(ok(x2,y2,n)){
                        if(cur == D[{dx[dir],dy[dir]}]){
                            flag = 1;
                            a1 = x2;
                            a2 = y2;
                        }
                    }
                }
                if(flag){
                    x1 = a1;
                    y1 = a2;
                    len++;
                    continue;
                }else{
                    break;
                }
            }
            ans[i] = len;
        }
        
        
        return ans;
    }
};