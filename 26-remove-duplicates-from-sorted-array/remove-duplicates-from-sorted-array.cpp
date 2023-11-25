class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int, int> m;
        int shift = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (m.contains(nums[i])) shift++;
            else {
                m[nums[i]]++;
                nums[i - shift] = nums[i];
            }
        }
        return nums.size() - shift;
    }
};