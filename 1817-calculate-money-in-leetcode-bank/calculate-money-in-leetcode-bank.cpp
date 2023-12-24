class Solution {
public:
    int totalMoney(int n) {
        int total = 0;
        int base = 0;
        int day = 0;
        while (n > 0) {
            if (day == 0) {
                total += ++base;
            } else {
                total += base + day; 
            }
            if (++day == 7) day = 0;
            n--;
        }
        return total;
    }
};