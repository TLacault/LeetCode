class Solution {
public:
    bool checkRecord(string s) {
        int absent = 0;
        int late_streak = 0;
        for (const auto &c : s) {
            switch (c) {
                case 'A':
                    late_streak = 0;
                    absent++;
                    if (absent >= 2) return false;
                    break;
                case 'L':
                    late_streak++;
                    if (late_streak >= 3) return false;
                    break;
                case 'P':
                    late_streak = 0;
                    break;
            }
        }
        return true;
    }
};