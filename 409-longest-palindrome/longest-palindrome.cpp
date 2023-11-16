class Solution {
public:
    int longestPalindrome(string s) {
        int max = 0;
        map<char, int> occ;
        for (auto c : s) occ[c]++;
        int len = 0;
        bool middle = false;
        for (auto i : occ) {
            if (i.second % 2 == 0) len += i.second;
            else if (middle == false) {
                middle = true;
                len += i.second;
            } else {
                len += i.second - 1;
            }
        }
        return len;
    }
};