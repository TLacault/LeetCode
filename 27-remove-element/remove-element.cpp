class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> array;
        int k = 0;
        for (const auto &num : nums) {
            if (num != val) {
                k++;
                array.emplace_back(num);
            }
        }
        for (int i = 0; i < k; i++) {
            nums[i] = array[i];
        }
        return k;
    }
};