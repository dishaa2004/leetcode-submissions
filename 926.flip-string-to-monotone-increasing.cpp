class Solution {
public:
    int minFlipsMonoIncr(string s) {
        int flip = 0 ;
        int o = 0 ;
        for(auto i:s)
        {
            if(i == '0')
            {
                if(o != 0)
                {
                    flip++ ;
                }
            }
            else
            {
                o++ ;
            }
            if(o < flip)
            {
                flip = o ;
            }
        }
        return flip ;
    }
};