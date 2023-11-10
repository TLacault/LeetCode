class Solution {
public:
    string reverse(string dst, string src, int idx) {
        for (int i = idx; i >= 0; i--) {
            if (src[i] == ' ') return dst;
            dst.push_back(src[i]);
        }
        return dst;
    }

    string reverseWords(string s) {
        string result;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == ' ') {
                result = reverse(result, s, i - 1);
                result.push_back(' ');
            } else if (i == s.length() - 1)
                result = reverse(result, s, i);
        }
        return result;
    }
};