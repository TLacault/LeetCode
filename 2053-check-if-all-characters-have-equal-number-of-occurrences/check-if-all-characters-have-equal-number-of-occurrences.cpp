class Solution {
public:
    bool areOccurrencesEqual(string s) {
        map<int, int> m;
        for (auto c : s) m[c]++;
        int freq = m[s[0]];
        for (auto c : m) if (c.second != freq) return false;
        return true;
    }
};