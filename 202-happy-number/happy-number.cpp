class Solution {
public:
    bool isHappy(int n) {
        if (n == 1) return true;
        string num = to_string(n);
        int happy;
        map<int, int> m;
        m[n]++;
        while (true) {
            happy = 0;
            for (auto c : num) happy += pow(c - 48, 2);
            if (m.contains(happy)) return false;
            if (happy == 1) return true;
            m[happy]++;
            num = to_string(happy);
        }
    }
};