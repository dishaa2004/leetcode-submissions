class Solution {
public:
    string largestNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end(),[](const auto &a,const auto &b){
            string x = to_string(a) + to_string(b);
            string y = to_string(b) + to_string(a);
            return x > y;
            
        });
        string ans = "";
        for(auto &k : nums){
            // cout << k << " ";
            ans += to_string(k);
        }
        ans.erase(0, ans.find_first_not_of('0'));
        
        if(ans == "") return "0";
        return ans;
    }
};