class Solution {
public:
    double trimMean(vector<int>& arr) {
        int n = arr.size();
        int i = 5*n/100;
        if(i<=0){
            
        }else{
            sort(arr.begin(),arr.end());
            int j = i;
            while(i--){
                if(arr.size()){
                    arr.pop_back();
                }
            }
            while(j--){
                if(arr.size()){
                    arr.erase(arr.begin());
                }
            }
            
        }
        n = arr.size();
        double ans = 1.0*accumulate(arr.begin(),arr.end(),0)/n;
        return ans;
    }
};