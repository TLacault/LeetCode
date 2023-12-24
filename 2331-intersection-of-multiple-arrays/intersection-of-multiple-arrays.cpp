class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        map<int, int> m;
        vector<int> res;

        for(auto num : nums)
            for (auto n : num)
                m[n]++;

        for (auto i : m)
            if (i.second == nums.size())
                res.emplace_back(i.first);

        return res;
    }
};