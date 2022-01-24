class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> neg,pos;
        for(auto &k : nums){
            if(k < 0){
                neg.push_back(k);
            }else{
                pos.push_back(k);
            }
        }
        int i=0,j=0;
        vector<int> ans;
        while(i<neg.size() && j < pos.size()){
            ans.push_back(pos[j++]);
            ans.push_back(neg[i++]);
        }
        return ans;
    }
};