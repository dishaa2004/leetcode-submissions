class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        vector<int> row;
        for(auto &k : bank){
            int o = 0;
            for(auto &p : k){
                if(p == '1') o++;
            }
            
            if(o != 0)
            row.push_back(o);
        }
        
        if(row.size() == 0 || row.size() == 1) return 0;
        
        int cur = row[0];
        int ans = 0;
        for(int j=1;j<row.size();j++){
            ans += cur*row[j];
            cur = row[j];
            
        }
        return ans;
    }
};