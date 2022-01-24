class Solution {
public:
    long long countVowels(string word) {
        long long ans = 0;
        vector<long long> v;
        int n = word.length();
        
        for(int i=0;i<n;i++){
            if(i==0) v.push_back(n);
            else v.push_back((n-i)+v[i-1]-i);
        }
        int j=0;
        for(auto &k : word){
            if (k == 'a' || k == 'e' || k == 'i'|| k == 'o' || k == 'u')
                ans += v[j];
            j++;
        }
        return ans;
    }
};