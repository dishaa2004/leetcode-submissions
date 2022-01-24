class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        int A[m][n];
         for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                A[i][j]=0;
            }
        }
        int cnt=0;
        
        for(int i=0;i<indices.size();i++)
        {
            int r = indices[i][0];
            int c = indices[i][1];
            for(int k=0;k<m;k++)
            {
                A[k][c]+=1;
            }
                
            for(int k=0;k<n;k++)
            {
                A[r][k]+=1;
            }
        }

        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(A[i][j]%2==1)
                    cnt++;
            }
        }
        return cnt;
    }
};