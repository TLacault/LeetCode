class Solution {
public:
    int missingNumber(vector<int>& nums) {
        map<int, int> m;
        for (int i = 0; i <= nums.size() + 1; i++) m[i] = i;
        for (auto n : nums) m.erase(n);
        return m.begin()->first;
    }
};