class Solution {
public:
    bool isPowerOfTwo(int n) {
        for (int i = 0; i < 100; i++) {
            if (pow(2, i) == n) return true;
            if (pow(2, i) > n) return false;
        }
        return false;
    }
};