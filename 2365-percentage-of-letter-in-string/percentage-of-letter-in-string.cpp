class Solution {
public:
    int percentageLetter(string s, char letter) {
        int count = 0;
        for (auto c : s) {
            if (c == letter) count++;
        }
        return count * 100 / s.length();
    }
};