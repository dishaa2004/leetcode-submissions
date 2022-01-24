class Solution {
public:
    int maximumDifference(vector<int>& x) {
        int ans = INT_MIN;
           
        for(int i=0;i<x.size();i++){
            for(int j=0;j<x.size();j++){
                if(i<j && x[i]<x[j]){
                    ans = max(ans,(x[j]-x[i]));
                }
            }
        }
        
      if(ans == INT_MIN) return -1;
      return ans;
    }
};