class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>> ans;
        sort(arr.begin(),arr.end());
        int mn = arr[1] - arr[0];
        
        for(int i=0;i<arr.size()-1;i++){
            mn = min(mn,arr[i+1]-arr[i]);
        }
        
        for(int i=0;i<arr.size()-1;i++){
            if(mn == arr[i+1]-arr[i]){
                ans.push_back({arr[i],arr[i+1]});
            }
        }
        
        return ans;
    }
};