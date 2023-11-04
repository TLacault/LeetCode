#include <string>
#include <vector>

using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size() == 1) return strs[0];

        string pre = strs[0];
        int max_length = strs[0].length();

        for (int i = 1; i < strs.size(); i++) {
            int current_length = 0;
            for (int j = 0; j < max_length; j++) {
                if (strs[0][j] == strs[i][j])
                    current_length++;
                else
                    break;
            }
            if (current_length < max_length)
                max_length = current_length;
        }

        return pre.substr(0, max_length);
    }
};