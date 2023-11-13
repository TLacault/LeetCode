class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        map<int, bool> m;
        int sum = 0;
        for (auto i : nums) {
            if (!m.contains(i)) {
                m[i] = true;
                sum += i;
            } else {
                if (m[i] == true) {
                    m[i] = false;
                    sum -= i;
                }
            }
        }
        return sum;
    }
};