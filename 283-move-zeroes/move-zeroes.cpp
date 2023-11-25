class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0) count++;
            else {
                nums[i - count] = nums[i];
            }
        }
        while (count--) nums[nums.size() - 1 - count] = 0;
    }
};