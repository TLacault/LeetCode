class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int, int> counts;
        map<int, bool> removed;
        for (auto i : nums) {
            if (removed.contains(i)) continue;
            counts[i]++;
            if (counts[i] == 2) {
                removed[i] = true;
                counts.erase(i);
            }
        }
        for (auto i : counts) return i.first;
        return 0;
    }
};