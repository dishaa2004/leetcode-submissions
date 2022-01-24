class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        vector<int> maxx(arr.size());
        int m = maxx[arr.size()-1] = -1;
        maxx[arr.size()-1] = -1;
        
        for(int i=arr.size()-1;i>=1;i--){
            maxx[i-1] = max(m,arr[i]);
            m = maxx[i-1];
        }
        
        return maxx;
    }
};