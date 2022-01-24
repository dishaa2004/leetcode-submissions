class Solution {
public:
    // int n = ;
    bool vis[500000];
    bool help(vector<int> &v, int pos){
        if(pos < 0 || pos >= v.size()){
            return 0;
        }
        
        if(vis[pos]) return 0;
        vis[pos] = 1;
        if(v[pos] == 0){
            return 1;
        }
        
        return help(v,pos+v[pos]) || help(v,pos-v[pos]);
    }
    bool canReach(vector<int>& arr, int start) {
        // n = arr.size();
        return help(arr,start);
    }
};