const int dx[] = {-1,0,1,0};
const int dy[] = {0,1,0,-1};
/// Up - (row-1,col+0) , Right-(row,col+1) , Down-(row+1,col),Left-(row,col-1)

class Solution {
public:
    bool ok(vector<vector<int>> &image,int prev, int i, int j, int r, int c){
        if(i<0 || j <0 || i >=r || j >= c){
            return 0;
        }
        if(image[i][j] == prev){
            return 1;
        }
        return 0;
    }
    
    void fill(int sr, int sc, int nc, vector<vector<int>> &image, int prev){
        image[sr][sc] = nc;
        for(int i=0;i<4;i++){
            if(ok(image, prev, sr+dx[i],sc+dy[i],image.size(),image[0].size())){
                fill(sr+dx[i],sc+dy[i],nc,image,prev);
            }
        }
    }
    
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int r = image.size();
        int c = image[0].size();
        int prev = image[sr][sc];
        if(prev == newColor){
            return image;
        }
        fill(sr,sc,newColor,image, prev);
        return image;
    }
};