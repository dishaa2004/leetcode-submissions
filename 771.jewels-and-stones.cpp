class Solution {
public:
    int numJewelsInStones(string jewels, string stones)
    {
        int p = 0;
        for (auto stone : stones) {

            if (jewels.find(stone) != std::string::npos)
                p++;
        }
              
        return p;
    }
};