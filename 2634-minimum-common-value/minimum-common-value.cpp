class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        map<int, int> mp1;
        map<int, int> mp2;

        for (const auto & num : nums1) { mp1[num] = num; }
        for (const auto & num : nums2) { mp2[num] = num; }

        for (auto i : mp1) {
            if (mp2.contains(i.first)) return i.first;
        }
        return -1;
    }
};