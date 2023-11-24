class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        map<int, int> m;
        for (auto n : nums) m[n*n]++;
        vector<int> res;
        for(auto i : m) {
            for (int j = 0; j < i.second; j++)
                res.emplace_back(i.first);
        }
        return res;
    }
};