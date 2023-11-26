class Solution {
public:
    int closetTarget(vector<string>& words, string target, int startIndex) {
        int right = 0;
        for (int i = 0; i < words.size(); i++) {
            if (words[(startIndex + i) % words.size()] == target) {
                return i;
            } else if (words[(startIndex - i + words.size()) % words.size()] == target) {
                return i;
            }
        }
        return -1;
    }
};