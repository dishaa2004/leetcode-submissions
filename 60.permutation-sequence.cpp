class Solution {
public:
    string getPermutation(int n, int k) {
        string str = "";
        for(int i=0;i<n;i++){
            str += i + '1';
        }
        int k1 = 0;
        do{
            k1++;
            if(k1==k)
            {
                return str;
            }
        }while(next_permutation(str.begin(),str.end()));
            
     return str;
    }
};