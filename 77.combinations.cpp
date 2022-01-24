class Solution {
public:
    
    vector<vector<int>> ans;
    
    void helper(vector<int> &a,int i,int n,int k)
    {
        if(a.size()==k){
            ans.push_back(a);
            // a.clear();
            return;
        }
        
        for(int kk=i;kk<=n;kk++){
            a.push_back(kk);
            helper(a,kk+1,n,k);
            a.pop_back();
        }
        return;
    }
    
    vector<vector<int>> combine(int n, int k) {
        vector<int> a;
        helper(a,1,n,k);

        return ans;
    }
};