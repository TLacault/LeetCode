class Solution {
public:
    int closetTarget(vector<string>& words, string target, int startIndex) {
        int right = 0;
        for (int i = 0; i < words.size(); i++) {
            if (words[(startIndex + i) % words.size()] == target) {
                right = i; break;
            }
            if (i == words.size() - 1) return -1;
        }
        int left = 0;
        for (int i = 0; i < words.size(); i++) {
            if (words[(startIndex - i + words.size()) % words.size()] == target) {
                left = i; break;
            }
        }
        return min(left, right);
    }
};