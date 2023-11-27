class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        map<int, int> m;
        vector<int> ans;
        for (int i = 0; i < nums2.size(); i++) m[nums2[i]] = i;
        for (int i = 0; i < nums1.size(); i++) {
            for (int j = m[nums1[i]]; j < nums2.size(); j++) {
                if (nums2[j] > nums1[i]) {
                    ans.emplace_back(nums2[j]);
                    break;
                }
                if (j == nums2.size() - 1) ans.emplace_back(-1);
            }
        }
        return ans;
    }
};