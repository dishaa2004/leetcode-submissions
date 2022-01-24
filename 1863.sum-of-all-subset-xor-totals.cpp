class Solution {
public:
 vector<vector<int>> subsets(vector<int>& nums) {
        int n=pow(2,nums.size());
        vector<vector<int>> v(n);
        for(int i=0;i<n;i++){
            for(int j=0;j<nums.size();j++){            
                if((i >> (j)) & 1)
                    v[i].push_back(nums[j]);            
            }            
        }
        return v;
    }
    vector<int> v;
    int subsetXORSum(vector<int>& nums) {
        vector<vector<int>> res = subsets(nums);

        for(int i=0;i<res.size();i++)
        {
            int xorr;
            for(int j=0;j<res[i].size();j++)
            {
                if(j==0)
                    xorr=res[i][j];
                else
                xorr^=res[i][j];
            }
            v.push_back(xorr);
        }  
    
    // for(int i=0;i<v.size();i++)
    // {
    //     cout<<v[i]<<" ";
    // }
        return accumulate(v.begin(),v.end(),0);
    }
};