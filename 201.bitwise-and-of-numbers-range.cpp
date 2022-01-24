class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        if(left == 0 && right == 0)
            return 0;
        
        int max2 = log2(right);
        if(left<=max2)
        {
            return 0;
        }
        else
        {
            int shift = 0;
            while(left  && right){ 
               if(left == right){ 
                  return (left<<shift); 
               }
            left= left>>1; 
                right = right>>1; 
                shift+=1; 
            }
        return 0;
        }
    }
};