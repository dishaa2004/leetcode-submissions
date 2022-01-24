class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        unordered_map <int,int > mp;
        int n = edges.size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<edges[i].size();j++)
            {
                mp[edges[i][j]]++;
            }
        }
        int p;
        for(auto k:mp)
        {
            if(k.second>1)
                p=k.first;
        }
        return p;
    }
};