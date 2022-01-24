class Solution {
public:
    // Check that set is valid or not
    bool valid(vector<string> &cur,vector<int> freq){
        for(auto &word : cur){
            for(auto &ch : word){
                if(freq[ch - 'a'] <= 0){ // If we are out of characters then return false
                    return 0;
                }
                // Reduce the frequency by 1
                freq[ch - 'a']--;
            }
        }
        return 1;
    }
    
    int maxScoreWords(vector<string>& words, vector<char>& letters, vector<int>& score) {
        // storing frequencies
        vector<int> freq(26,0);
        for(auto &ch : letters){
            freq[ch - 'a']++;
        }
        
        int n = words.size();
        int max_score = 0;
        
        // Using Bitmasking Approach to try out all possible sets because 1 <= n <= 14
        for(int i=0;i<(1<<n);i++){
            vector<string> cur; 
            for(int j=0;j<n;j++){
                // Include that word in current set
                if(i&(1<<j)){
                    cur.push_back(words[j]);
                }
            }
            if(cur.size() == 0) continue;
            // If set is valid then compute the current score
            if(valid(cur,freq)){
                int cur_score = 0;
                for(auto &word : cur){
                    for(auto &ch : word){
                        cur_score += score[ch - 'a'];
                    }
                }
                max_score = max(max_score,cur_score);
            }
        }
        return max_score;
    }
};