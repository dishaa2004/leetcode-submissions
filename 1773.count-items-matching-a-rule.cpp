class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int c=0,k;
        if(ruleKey == "type")
                k = 0;
            else if(ruleKey == "color")
                k = 1;
            else if(ruleKey == "name")
                k = 2;
        for (int i = 0; i < items.size(); i++) 
        {  
            if(items[i][k] == ruleValue)
                c=c+1;
           
        } 
        return c;
        
    }
};