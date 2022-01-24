class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int i=0,j=0;
        string ans = "";
        while(i<word1.size() && j<word2.size()){
            ans.push_back(word1[i]);
            ans.push_back(word2[j]);
            i++,j++;
        }
        
        if(i == word1.size()){
            while(j<word2.size()){
                ans.push_back(word2[j]);
                j++;
            }
        }else{
            while(i<word1.size()){
                ans.push_back(word1[i]);
                i++;
            }
        }
        return ans;
    }
};