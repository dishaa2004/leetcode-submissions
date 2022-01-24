class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int e = 0, o = 0;
        for(auto &k : position){
            if(k&1) o++;
            else e++;
        }
        return min(e,o);
    }
};