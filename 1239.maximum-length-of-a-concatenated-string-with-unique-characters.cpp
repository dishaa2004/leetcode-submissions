class Solution {
public:
    int maxLength(vector<string>& arr) {
        int n = arr.size();
        int pw = (1<<n);
        // cout << (1 << 16) << endl;
        int ans = -1e9;
        for(int i=0;i<pw;i++){
            bool flag = 0;
            vector<int> f(26,0);
            int mx = 0;
            for(int j=0;j<n;j++){
                if(i&(1<<j)){
                    for(auto &k : arr[j]){
                        if(f[k-'a'] > 0){
                            flag = 1;
                            break;
                        }else{
                            f[k-'a']++;
                        }
                    }
                    mx += arr[j].size();
                    if(flag) break;
                }
                
            }
            
            if(!flag) ans = max(ans,mx);
            
        }
        if(ans == -1e9) ans = 0;
        return ans;
    }
};