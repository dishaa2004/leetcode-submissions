class Solution {
public:
    string customSortString(string s, string t) {
        vector<int> mp(26,INT_MAX);
        //map for storing index of each character and sort according to their index in s
        for(int idx = 0;idx<s.length();idx++)
            mp[s[idx]-'a'] = idx;
        //sort using custom compare function
        sort(t.begin(),t.end(),[&] (char a,char b){
            return mp[a-'a']<mp[b-'a'];
        });
        return t;
    }
};