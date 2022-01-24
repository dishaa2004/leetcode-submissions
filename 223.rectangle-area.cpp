class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        int r1 = abs(ax2 - ax1) * abs(ay2 - ay1);
        int r2 = abs(bx2 - bx1) * abs(by2 - by1);
        
        //No Overlapping
        if(bx1 >= ax2 || bx2 <= ax1 || by1 >= ay2 || by2 <= ay1){
            return r1+r2;
        }
        
        int tot = r1+r2; // But it contains the overlapping area twice
        // Lets remove it once so that we get th final ans
        int a,b,c,d;
        a = min(ay2,by2),b = min(ax2,bx2);// top right  
        c = max(ay1,by1), d= max(bx1,ax1);// bottom left and max because we are dealing with negative integers
                
        int overlap = (b - d)*(a-c);
        tot = tot - (overlap);
        return tot;
    }
};