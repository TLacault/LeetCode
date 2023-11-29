class Solution {
public:
    int addDigits(int num) {
        int current;
        string str;
        while (num > 9) {
            current = 0;
            str = to_string(num);
            for (auto c : str) current += c - 48;
            cout << current << endl;
            num = current;
        }
        return current;
    }
};