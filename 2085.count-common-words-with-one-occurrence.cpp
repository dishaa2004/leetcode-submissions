class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        map<string,int> mp1,mp2,mp;
        for(auto &k : words1) mp1[k]++,mp[k]++;
        for(auto &k : words2) mp2[k]++,mp[k]++;
        int a = 0;
        for(auto &k : mp){
            if(k.second == 2 && mp1[k.first] == 1 && mp2[k.first] == 1){

            a++;
            }
        }
        return a;   
    }
};