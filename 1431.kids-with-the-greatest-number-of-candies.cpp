class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& C, int E) {
        vector<bool> B(C.size(),false);
        int max = -1;
        for(int i=0;i<C.size();i++)
        {
            if(C[i]>max)
                max = C[i];
        }
        for(int i=0;i<C.size();i++)
        {
          if(C[i]+E >=max)
              B[i] = true;
        }
        return B;
    }
};