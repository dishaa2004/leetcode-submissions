class Solution {
public:
    
    int dfs(int index, vector<bool>&visited,vector<int>&nums)
    {
	   // cycle found and so return 
        if(visited[index]) return 0;
        visited[index] = true;
        return 1 + dfs(nums[index],visited,nums);            
    }
    
    int arrayNesting(vector<int>& nums) {

        int n = nums.size();
        vector<bool>visited(n,false);
        int maxl = 0;
        
        for(int i=0;i<n;i++)
        {
            if(!visited[i])maxl=max(maxl,dfs(i,visited,nums));
        }
        
        return maxl;
    }
};