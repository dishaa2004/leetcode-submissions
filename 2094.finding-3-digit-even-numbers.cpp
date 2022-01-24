class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        set<int> ans;
        int n = digits.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                for(int k=0;k<n;k++){
                    if(i != j && j != k && i != k && digits[k] % 2 == 0){
                        if(digits[i] != 0)
                        ans.insert(digits[i]*100 + digits[j]*10 + digits[k]);
                    }
                }
            }
        }
        vector<int> a;
        for(auto &k : ans) a.push_back(k);
        return a;
    }
};