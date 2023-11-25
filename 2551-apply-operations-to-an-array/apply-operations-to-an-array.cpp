class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) count++;
            else nums[i - count] = nums[i];
        }
        while (count--) nums[nums.size() - 1 - count] = 0;
    }

    vector<int> applyOperations(vector<int>& nums) {
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] == nums[i + 1]) {
                nums[i] *= 2;
                nums[i + 1] = 0;
            }
        }
        moveZeroes(nums);
        return nums;
    }
};