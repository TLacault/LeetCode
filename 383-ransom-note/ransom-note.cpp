class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char, int> r;
        for (auto c : ransomNote) r[c]++;

        map<char, int> m;
        for (auto c : magazine) m[c]++;

        for (auto i : r) {
            if (i.second > m[i.first]) return false;
        }
     
        return true;
    }
};