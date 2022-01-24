class Solution {
public:
    int lengthOfLastWord(string s) {
        reverse(s.begin(),s.end());
        int n = s.length();
        if(s[0] == ' ')
        {
            int k = 0;
            for(int i=0;i<n;i++)
            {
                if(s[i] == ' ')
                    k++;
                else
                    break;
            }
            int cnt = 0;
            for(int i=k;i<n;i++)
            {
                if(s[i]!= ' ')
                    cnt++;
                else
                    break;
            }
            return cnt;
        }
        int ans = 0;
            for(int i=0;i<n;i++)
            {
                if(s[i]!= ' ')
                    ans++;
                else
                    break;
            }
            return ans;
    }
};