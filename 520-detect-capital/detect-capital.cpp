class Solution {
public:
    bool detectCapitalUse(string word) {
        bool full_cap = true;
        for (int i = 0; i < word.length(); i++) {
            if (word[i] >= 'A' && word[i] <= 'Z' && !full_cap) return false;
            else if (word[i] >= 'a' && word[i] <= 'z') {
                if (i > 1 && full_cap) return false;
                full_cap = false;
            }
        }
        return true;
    }
};