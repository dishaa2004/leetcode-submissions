class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if(n == 1) return 1;
        vector<int> indeg(n+1,0);
        vector<int> outdeg(n+1,0);

        for(auto &k : trust){ 
            indeg[k[1]]++;
            outdeg[k[0]]++;
        }
        
        for(int i=1;i<=n;i++){
            if(outdeg[i] == 0 && indeg[i] == (n-1)){
                return i;
            }
        }
        
        return -1;
    }
};