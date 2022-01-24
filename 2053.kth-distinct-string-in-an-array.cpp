class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int> mp;
        for(auto &k : arr) mp[k]++;
        
        vector<string> order;
        
        for(auto &k : arr){
            if(mp[k] == 1){
                order.push_back(k);
            }
        }
        
        if(k <= order.size()){
            return order[k-1];
        }
        return "";
    }
};