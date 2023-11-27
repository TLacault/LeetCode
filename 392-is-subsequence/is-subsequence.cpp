class Solution {
public:
    bool isSubsequence(string s, string t) {
        int idx = 0;
        if (s == "") return true;
        for (int i = 0; i < t.length(); i++) {
            if (t[i] == s[idx]) {
                if (++idx == s.length()) return true;
            }
        }
        return false;
    }
};