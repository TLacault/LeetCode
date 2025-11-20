class Solution {
public:
    char reverse(char c) {
        switch (c) {
            case ')': return '('; break;
            case '}': return '{'; break;
            case ']': return '['; break;
        }
        return 0;
    }

    bool isValid(string s) {
        stack<char> st;
        for (auto c: s) {
            if (c == '(' || c == '{' || c =='[')
                st.push(c);
            else {
                if (st.empty()) return false;
                if (st.top() != reverse(c)) return false;
                st.pop();
            }
        }
        return st.empty();
    }
};