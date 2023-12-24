class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        map<int, int> m;
        for (auto num : nums[0]) m[num]++;

        map <int, int> current;
        for (auto n : nums) {
            current.clear();
            for (auto i : n) if (m.contains(i)) current[i]++;
            m = current;
        }
        vector<int> res;
        for (auto n : m) res.emplace_back(n.first);
        return res;
    }
};