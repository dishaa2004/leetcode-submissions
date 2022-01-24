class Solution {
public:
    int maxConsecutiveAnswers(string a, int k) {
        int zero = 0, i = 0, maxLen1 = 0;
        for(int j = 0 ; j < a.size() ; j++) {
            if( a[j] == 'F' ) zero+=1;
            while(zero > k) {
                if(a[i] == 'F') zero-=1;
                i++;
            }
            maxLen1 = max( maxLen1, j-i+1);
        }
        int one =0,maxLen2=0;i=0;
        for(int j = 0 ; j < a.size() ; j++) {
            if( a[j] == 'T' ) one+=1;
            while(one > k) {
                if(a[i] == 'T') one-=1;
                i++;
            }
            maxLen2 = max( maxLen2, j-i+1);
        }
        
        return max(maxLen1,maxLen2);
    }
};