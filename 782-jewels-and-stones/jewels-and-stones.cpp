class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        map<char, int> m;
        for (auto j : jewels) m[j]++;
        int count = 0;
        for (auto s : stones) if(m.contains(s)) count++;
        return count;
    }
};