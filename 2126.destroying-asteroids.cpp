class Solution {
public:
    bool asteroidsDestroyed(int mass, vector<int>& as) {
        sort(as.begin(),as.end());
        long long int m = mass;
        for(int i=0;i<as.size();i++){
            if(as[i] > m){
                return false;
            }else{
                m += as[i];
            }
        }
        return true;
    }
};