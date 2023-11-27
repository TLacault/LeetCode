class Solution {
public:
    int countElements(vector<int>& nums) {
        map<int, int> m;
        for (auto n : nums) m[n]++;
        int count = 0;
        for (auto i : m) count += i.second;
        count -= m.begin()->second;
        count -= prev(m.end())->second;
        return (count < 0) ? 0 : count;
    }
};