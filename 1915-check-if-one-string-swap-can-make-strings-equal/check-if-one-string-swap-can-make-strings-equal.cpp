class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if (s1.length() != s2.length()) return false;

        vector<int> mismatch(26, 0);
        int count = 0;
        for (int i = 0; i < s1.length(); i++) {
            if (s1[i] != s2[i]) {
                mismatch[s1[i] - 97]++;
                mismatch[s2[i] - 97]--;
                count++;
               if (count > 2) return false;
            }
        }
        for (auto i : mismatch) if (i != 0) return false;
        return true;
    }
};