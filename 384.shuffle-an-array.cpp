class Solution {
public:
    vector<int> org;
    vector<int> array;
    Solution(vector<int>& nums) {
        org = nums;
        array = nums;
    }
    
    vector<int> reset() {
        array = org;
        return org;
    }
    
    vector<int> shuffle() {
        vector<int> aux = array;
        int n = array.size();        
        for(int i = 0; i < n; i++){
            int id = rand() % aux.size();
            array[i] = aux[id];
            aux.erase(aux.begin()+id);
        }
        return array;
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * vector<int> param_1 = obj->reset();
 * vector<int> param_2 = obj->shuffle();
 */