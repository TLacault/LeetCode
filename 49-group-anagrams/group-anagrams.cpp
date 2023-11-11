#include <string>
#include <vector>
#include <climits>
#include <iostream>
#include <map>
#include <unordered_map>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>> map;

        for (const auto& str : strs) {
            string copy = str;
            sort(copy.begin(), copy.end());
            map[copy].push_back(str);
        }

        vector<vector<string>> lists;
        for (auto& [header, list] : map) {
            lists.push_back(list);
        }
        return lists;
    }

    bool is_anagram(const string& src, const string& dst) {
        if (src.length() != dst.length())
            return false;

        map<char, int> map;
        for (int i = 0; i < src.length(); i++) {
            map[src[i]]++;
            map[dst[i]]--;
        }
        for (auto& [key, num] : map) {
            if (num != 0)
                return false;
        }

        return true;
    }
};