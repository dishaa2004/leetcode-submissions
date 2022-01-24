class Solution {
public:
    vector<vector<int>> ans;int n;
    void dfs(vector<vector<int>> &graph,vector<int> &path,int curr){
        if(curr == n){
            ans.push_back(path);
        }else{
            for(int k : graph[curr]){
                path.push_back(k);
                dfs(graph,path,k);
                path.pop_back();
            }
        }
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        n = graph.size()-1;
        vector<int> path = {0};
        dfs(graph,path,0);
        return ans;
    }
};