class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        if(is_permutation(target.begin(), target.end(), arr.begin())){
            return true;
        }
        
        return false; 
    }
};