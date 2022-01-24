class Solution {
public:
    int minMoves(int target, int maxDoubles) {
        int ans = 0;
        while(target != 1){
            if(target & 1){
                target--;
            }else{
                if(maxDoubles){
                    target/=2;
                    maxDoubles--;
                }else{
                    target--;
                }
            }
            // cout << target << " ";
            ans++;
            if(maxDoubles == 0){
                return abs(target - 1) + ans;
            }
        }
        return ans;
    }
};