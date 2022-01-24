class Solution {
public:
    bool check(int x,int y,int r,int a,int b)
    {
        int d = (x - a)*(x - a) + (y - b)*(y - b);
        if(d <= r*r) return true;
        else return false;
    }
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        int s1 = queries.size(),s2 = points.size();
        vector<int> ans;
        for(int i=0;i<s1;i++)
        {
            int x = queries[i][0],y = queries[i][1],r = queries[i][2];
            int cnt = 0;
            for(int i=0;i<s2;i++)
            {
                int a = points[i][0],b = points[i][1];
                if(check(x,y,r,a,b)) cnt++;
            }
            
            ans.push_back(cnt);
        }
        return ans;
    }
};