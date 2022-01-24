class Solution {
public:
    int arraySign(vector<int>& nums) {
        int neg = 0,pos = 0,flag = 0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i] == 0)
                 flag = 1;
            if(nums[i] < 0)
                 neg++;
            else if(nums[i]>0)
                 pos++;    
        }
        if(flag == 1)
            return 0;
        if(neg%2 == 0)
              return 1;
        else if(neg%2 == 1)
              return -1;
      return 0;  
    }
};