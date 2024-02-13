class Solution {
public:
    bool canJump(vector<int>& nums) {
        int max_idx = nums[0];

        for (int i = 0; i < nums.size(); i++) {
            if (max_idx >= nums.size() - 1) return true;

            // if we enccounter 0, check that max_idx can reach after it
            if (nums[i] == 0 && max_idx == i) return false;

            // set max_idx at the new highest reacheable idx
            if (i + nums[i] > max_idx) max_idx = i + nums[i];
        }
        return true;
    }
};