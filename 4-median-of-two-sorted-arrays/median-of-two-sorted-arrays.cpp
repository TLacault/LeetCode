class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> arr;
        arr.reserve(nums1.size() + nums2.size());
        int i = 0;
        int j = 0;
        while (true) {
            if (i >= nums1.size() && j >= nums2.size()) { break; }
            
            if (i >= nums1.size() && j < nums2.size()) {
                arr.emplace_back(nums2[j]); j++;
            } else if (i < nums1.size() && j >= nums2.size()) {
                arr.emplace_back(nums1[i]); i++;
            } else {
                if (nums1[i] <= nums2[j]) {
                    arr.emplace_back(nums1[i]); i++;
                } else {
                    arr.emplace_back(nums2[j]); j++;
                }
            }
        }

        return (arr.size() % 2 == 1) ?
            arr[arr.size() / 2] :
            ((double)arr[arr.size() / 2 - 1] + (double)arr[arr.size() / 2]) / 2;
    }
};