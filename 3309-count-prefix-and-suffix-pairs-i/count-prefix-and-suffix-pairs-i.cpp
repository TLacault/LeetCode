class Solution {
public:

    bool isPrefixAndSuffix(string str1, string str2) {
        if (str1.length() > str2.length()) return false;

        for (int i = 0; i < str1.length(); i++) {
            if (str1[i] != str2[i]) return false;
        }


        for (int i = 0; i < str1.length(); i++) {
            if (str1[str1.length() - 1 - i] != str2[str2.length() - 1 - i]) return false;
        }

        return true;
    }

    int countPrefixSuffixPairs(vector<string>& words) {
        int count = 0;
        for (int i = 0; i < words.size() - 1; i++) {
            for (int j = i+1; j < words.size(); j++) {
                count += isPrefixAndSuffix(words[i], words[j]);
            }
        }

        return count;
    }
};