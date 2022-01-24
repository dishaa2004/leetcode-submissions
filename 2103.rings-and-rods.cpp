class Solution {
public:
    int countPoints(string rings) {
        vector<array<int,3>> v(10);
        
        for(int i=0;i<rings.size();i+=2){
            char c = rings[i];
            int cur = rings[i+1]-'0';
            if(c == 'R'){
                v[cur][0] = 1;
            }else if(c == 'G'){
                v[cur][1] = 1;
            }else{
                v[cur][2] = 1;
            }
        }
        int a = 0;
        for(auto &k : v){
            if(k[0] == 1 && k[1] == 1 && k[2] == 1) a++;
        }
        return a;
    }
};