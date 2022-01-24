class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        if(n == 0) return 1;
        queue<string> Q;
        for(int i=1;i<=9;i++)
            Q.push(to_string(i));
        
        int ans = 1;
        while(Q.size()){
            string cur = Q.front(); Q.pop();
            ans++;
            if(cur.size() >= n) continue;
            
            for(int i=0;i<=9;i++){
                bool can = true;
                for(char ch : cur){
                    if((ch-'0') == i){
                        can = false;
                        break;
                    }
                }
                if(can){
                    Q.push(cur + to_string(i));
                }
            }
            
        }
        return ans;
    }
};