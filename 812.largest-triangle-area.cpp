class Solution {
public:
    double largestTriangleArea(vector<vector<int>>& points) {
        int n=points.size();
        double maxArea = 0;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                for(int k=j+1;k<n;k++)
                {
                    int x1 = points[i][0],x2= points[j][0],x3 = points[k][0],y1 = points[i][1],y2 = points[j][1],y3 = points[k][1];
                    double A = 1.0*abs(x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y2))/2;
                    if(A > maxArea) maxArea = A;
                }
            }
        }
        return maxArea;
    }
};