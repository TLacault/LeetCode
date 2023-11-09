#include <string>

using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;

        string number = to_string(x);
        int j = number.size() - 1;
        for (int i = 0; i <= j; i++) {
            if (number[i] != number[j])
                return false;
            j--;
        }
        return true;
    }
};