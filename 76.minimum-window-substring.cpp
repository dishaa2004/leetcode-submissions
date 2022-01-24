class Solution {
public:
    string minWindow(string s, string t) {
        if(t.length() > s.length())
        {
            string ans;
            return ans;
        }
        unordered_map<char, int> freq;
        for(int i = 0; i < t.length(); ++i)
        {
            freq[t[i]]++;
        }
        int count = freq.size();
        int i = 0;
        int mn = INT_MAX;
        string ans;
        for(int j = 0; j < s.length(); ++j)
        {
            if(count > 0)
            {
                if(freq.find(s[j]) != freq.end())
                {    
                    freq[s[j]]--;
                    if(freq[s[j]] == 0)
                        count--;
                }
            }
            if(count == 0)
            {
                while(count == 0)
                {
                    if(freq.find(s[i]) == freq.end())
                    {
                        i++;
                    }
                    if(freq.find(s[i]) != freq.end())
                    {
                        freq[s[i]]++;
                        if(freq[s[i]] > 0)
                            count++;
                        if(count > 0)
                        {
                            if(j-i+1 < mn)
                            {
                                mn = j-i+1;
                                ans = s.substr(i, mn);
                            }
                        }
                        i++;
                    }
                   
                }
            }
        }
        return ans;
    }
};