class Solution {
public:
    void help(vector<vector<int>>& ans,int sum, int st, int tar, vector<int> &temp, vector<int> &arr)
    {
        
        if(sum > tar){
            return;
        }
        
        if(sum == tar){
            ans.push_back(temp);
            return;
        }
        
        if(st == arr.size()) return;
        
        for(int i=st;i<arr.size();i++){
            if(st!=i){
                if(arr[i]==arr[i-1])
                    continue;
            }
            temp.push_back(arr[i]);
            help(ans,sum+arr[i],i+1,tar,temp,arr);
            temp.pop_back();
        }
    }
    
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> temp;
        sort(candidates.begin(),candidates.end());
        help(ans,0,0,target,temp,candidates);
        return ans;
    }
};