class Solution {
public:
    int type(char c) {
        if (c >= 'a' && c <= 'z') return 1;
        if (c >= 'A' && c <= 'Z') return 2;
        if (c >= '0' && c <= '9') return 3;
        return 4;        
    }

    enum { CHARS, LOWER, UPPER, DIGIT, SPECIAL };

    bool strongPasswordCheckerII(string password) {
        char prev = 0;
        // chars, lower, upper, digit, special
        vector<int> count(5, 0);
        for (auto c : password) {
            if (c == prev) return false;
            else prev = c;
            count[CHARS]++;
            count[type(c)]++;
        }
        if (count[CHARS] < 8) return false;
        count.erase(count.begin());
        for (auto val : count) if (val < 1) return false;
        return true; 
    }
};