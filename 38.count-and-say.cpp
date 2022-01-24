class Solution {
public:
    string say(int n)
    {
        if(n==1){
            return "1";
        }else if(n==2){
            return "11";
        }
        string p = say(n-1);
        int i=0,cnt=0;
        string ans = "";
        while(i+1 < p.size()){
            if(p[i] == p[i+1])
                cnt++;
            else{
                    ans.push_back(cnt+'0');
                    ans.push_back(p[i]);
                cnt = 0;
            }
            i++;
        }
        return ans;
    }
    string countAndSay(int n) {
        if(n==1) return "1";
        
        string res="1";
        while(n>1)
        {
          string s=res;
               res.clear();
               int c=1;
               for(int i=0; i<s.length(); i++)
               {
                   if(s[i]==s[i+1])
                   {
                       c++;
                       continue;
                   }
                   else
                   {
                       char cnt=c+48;
                       char num=s[i];
                       res.push_back(cnt);
                       res.push_back(num);
                       c=1;
                   }
               }
               n--;
        }
        return res;
    }
};