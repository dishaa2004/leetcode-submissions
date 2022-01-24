class Solution {
public:
    int minTimeToType(string word) {
        int ans=word.size();
        if(word[0] != 'a'){
            int d = word[0]-'a';
            ans+=min(26-abs(d),abs(d));
        }
        for(int i=1;i<word.size();i++){
            int s =abs(word[i]-word[i-1]);
            ans += min(26-s,s);
        }
        return ans;
    }
};