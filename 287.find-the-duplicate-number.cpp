class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = nums[0];
        int fast = nums[0];
        
        do{
            slow = nums[slow];
            fast = nums[nums[fast]];
        }while(slow != fast);
            
        // Placing fast at first positing and then moving both the pointers by one distance to find out the element which is duplicate
            fast = nums[0];
        while(slow != fast){
            fast = nums[fast];
            slow = nums[slow];
        }
        return slow;
    }
};