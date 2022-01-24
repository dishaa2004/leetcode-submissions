class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        if(nums.size() == 1 || nums.size() == 2){
            return 1;
        }
        if(is_sorted(nums.begin(),nums.end())){
            return 1;
        }
        int pos = -1;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i] > nums[i+1]){
                pos = i;
                break;
            }
        }
        vector<int> a = nums;
        vector<int> b = nums;
        
        a[pos] = a[pos+1];
        b[pos+1] = b[pos];
        
        if(is_sorted(a.begin(),a.end())){
            return 1;
        }
        
        if(is_sorted(b.begin(),b.end())){
            return 1;
        }
        
        
        return 0;
    }
};