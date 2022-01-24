class Solution {
public:
    bool stoneGame(vector<int>& v) {
        int turn = 0; // Alex = 0, Lee = 1
        while(1){
            if(v.size()<=0){
                break;
            }
            else if(v.size()==1){
                turn^=1;
                break;
            }

            if(v[0]<v[v.size()-1]){
                v.erase(v.begin());
                turn^=1;
            }else{
                auto it = v.end();
                v.erase((--it));
                turn^=1;
            }
        }
        
        return turn == 0;
    }
};