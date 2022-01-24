class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> nums1;
        for(int i=0;i<nums.size();i++){
            nums1.insert(nums[i]);
        }
        priority_queue<int> pq;
        for(auto &k : nums1){
            pq.push(k);
        }
        int k1 = 0;
        if(pq.size() < 3){
            return pq.top();
        }
        while(pq.size() > 0 ){
            int ele = pq.top();
            k1++;
            if(k1 == 3)
                return ele;
            pq.pop();
        }
        return -1;
    }
};