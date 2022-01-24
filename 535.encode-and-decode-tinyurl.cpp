class Solution {
public:

    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        string ans = "";
        for(auto &k : longUrl){
            ans.push_back(k + 1);
        }
        return ans;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        
        string ans = "";
        for(auto &k : shortUrl){
            ans.push_back(k - 1);
        }
        return ans;
        
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));