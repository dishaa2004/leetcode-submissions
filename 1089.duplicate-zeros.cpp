class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        vector<int> ans;int cnt =0;
        for(int i=0;i<arr.size();i++){
            if(arr[i] == 0){
                cnt++;
               ans.push_back(0);
               ans.push_back(0);
            }else{
                ans.push_back(arr[i]);
            }
        }
        while(cnt--){
            ans.pop_back();
        }
        arr = ans;
    }
};