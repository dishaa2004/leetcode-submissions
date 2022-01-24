class Solution {
public:
    int minFlips(int a, int b, int c) {
        int ans = 0;
        vector<int> bita(31,0), bitb(31,0), bit(31,0);
        for(int i=30;i>=0;i--){
            if(a&(1<<i)){
                bita[i] = 1;
            }
            // cout << bita[i] << " ";
        }
        // cout << endl;
        for(int i=30;i>=0;i--){
            if(b&(1<<i)){
                bitb[i] = 1;
            }
            // cout << bitb[i] << " ";
        }
        // cout << endl;
        // int o = a | b;
        for(int i=30;i>=0;i--){
            if(c&(1<<i)){
                bit[i] = 1;
            }
            // cout << bit[i] << " ";
        }
        
        for(int i=0;i<31;i++){
            if( (bita[i] | bitb[i]) != bit[i]){
                if(bit[i] == 0){
                    if(bita[i] == 1) ans++;
                    if(bitb[i] == 1) ans++;
                }else{
                    ans += 1;
                }
            }
        }
        
        
        
        return ans;
    }
};