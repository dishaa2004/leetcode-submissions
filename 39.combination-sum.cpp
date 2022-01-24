class Solution {
public:
    int tar;
    vector<vector<int>> res;
    
    void help(vector<int> v, vector<int> t, int sum,int index)
    {
        if(sum > tar){
            return;
        }
        
        if(sum == tar){
            res.push_back(t);
            return;
        }
        
        for(int i=index;i<v.size();i++){
            int s = sum + v[i];
            t.push_back(v[i]);
            help(v,t,s,i);
            t.pop_back();
        }
        
    }
    
    vector<vector<int>> combinationSum(vector<int>& v, int target) {
        tar = target;
        vector<int> t;
        help(v,t,0,0);
        return res;
    }
};