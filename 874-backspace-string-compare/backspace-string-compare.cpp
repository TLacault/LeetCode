class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string ss;
        int top = 0;
        for (auto c : s) {
            if (c == '#' && top > 0) {
                top--;
                ss.erase(top);
            } else if (c >= 'a' && c <= 'z') {
                ss.push_back(c);
                top++;
            }
        }
        string st;
        top = 0;
        for (auto c : t) {
            if (c == '#' && top > 0) {
                top--;
                st.erase(top);
            } else if (c >= 'a' && c <= 'z') {
                st.push_back(c);
                top++;
            }
        }
        return !ss.compare(st);
    }
};