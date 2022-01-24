class Solution {
public:
    int lastRemaining(int n) {
        if(n == 1){
            return 1;
        }
        int dir = 1, head=1, step=1;
        while(n>1)
        {
            if(dir%2==1)
                head+=step;
            else
                head+=(n%2==0)? 0:step;
            step*=2;
            n/=2;
            dir++;
        }
        return head;
        
    }
};