class Solution {
public:
    string reversePrefix(string word, char ch) {
        bool f=0;int itr=0;
        for(int i=0;i<word.size();i++){
            if(word[i] == ch){
                f=1;
                itr = i;
                break;
            }
        }
        
        if(f==0){
            return word;
        }
        
        reverse(word.begin(),word.begin()+itr+1);
        return word;
    }
};