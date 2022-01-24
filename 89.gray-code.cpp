class Solution {
public:
    vector<int> grayCode(int n) {
       vector<int> ans;
       
        
        for(int i=0;i<=n;i++){
            if(i == 0){
                ans.push_back(0);
                continue;
            }
            int prev = ans.size();
            int mask  = 1 << (i-1);
            for(int j=prev-1;j>=0;j--){
                ans.push_back(mask + ans[j]);
            }
        }
        return ans;
    }
};