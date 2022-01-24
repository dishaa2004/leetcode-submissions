class Solution {
public:
    int findMiddleIndex(vector<int>& a) {
        int n = a.size();
        vector<int> pre(n),suf(n);
        int x = 0;
        for(int i=0;i<n;i++){
            x += a[i];
            pre[i] = x;
        }
        x =0 ;int ii=0;
        for(int j=n-1;j>=0;j--){
            x += a[j];
            suf[j] = x;
        }
        
//         for(auto &k : pre){
//             cout<<k<<" ";
//         }
//         cout<<endl;
        
//         for(auto &k : suf){
//             cout<<k<<" ";
//         }
//         cout<<endl;
        
        for(int i=0;i<n;i++){
            if(pre[i] == suf[i]) return i;
        }
        
        return -1;
        
        
    }
};