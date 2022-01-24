class Solution {
public:
    bool detectCapitalUse(string word) {
        int cnt = 0,cnt1=0;
        char ch = 'a';
        for(int k : word)
        {
            if(k>=65 && k<=90)
            {
                cnt++;
            }
            else
            {
                cnt1++;
            }
        }
        int check = word[0];
        bool flag = 0;
        if(check >= 65 && check <= 90 && cnt == 1)
            flag = 1;
        return (cnt==word.size() || cnt1 == word.size() || flag);
    }
};