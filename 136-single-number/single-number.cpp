class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int, int> counts;
        for (auto i : nums) { counts[i]++; }
        for (auto i : counts) if (i.second == 1) return i.first;
        return 0;
    }
};