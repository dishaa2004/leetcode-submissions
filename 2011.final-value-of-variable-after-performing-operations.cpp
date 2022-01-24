class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int x=0;
        for(auto &k : operations)
        {
            if(k == "X--"){
                x--;
            }else if(k == "--X"){
                --x;
            }else if(k == "X++"){
                x++;
            }else{
                ++x;
            }
        }
        return x;
    }
};