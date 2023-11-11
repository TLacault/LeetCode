class Solution {
public:
    bool isPalindrome(string s) {
        string str = format_input(s);

        for (int i = 0; i < str.length(); i++) {
            if (str.at(i) != str.at(str.length() - i - 1))
                return false;
            if (i > str.length() / 2)
                return true;
        }

        return true;
    }

    string format_input(string input) {
        string output;
        output.reserve(input.size());
        for (const auto& c : input) {
            if (c >= 'a' && c <= 'z')
                output.push_back(c);
            else if (c >= 'A' && c <= 'Z')
                output.push_back(c + 32);
            else if (c >= '0' && c <= '9')
                output.push_back(c);
        }
        return output;
    }
};