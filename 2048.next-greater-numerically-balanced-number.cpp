class Solution {
public:
    bool ok(int k)
    {
        int a[10];
        memset(a,0,sizeof(a));
        while(k>0){
            a[k%10]++;
            k/=10;
        }
        
        for(int i=0;i<10;i++){
            if(a[i] != 0 && a[i] != i) return 0;
        }
        return 1;
    }
    
    int nextBeautifulNumber(int n) {
        n++;
        while(!ok(n)) n++;
        return n;
    }
};