class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        string key;
        int group_len = 0;

        int key_len = 0;
        for (auto c : s) { if (c != '-') key_len++; }
        int first_group_len = (key_len % k == 0) ? k : key_len % k;
        bool first_group = true;
        int nb_groups = key_len / k + ((key_len % k == 0) ? 0 : 1);

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '-') {
                continue;
            } else {
                key.push_back((s[i] >= 'a' && s[i] <= 'z') ? s[i] - 32 : s[i]);
                if (first_group_len > 0) first_group_len--;
                else group_len++;
            }

            if (first_group && first_group_len == 0) {
                first_group = false;
                nb_groups--;
                if (nb_groups > 0) key.push_back('-');
            }

            if (group_len == k) {
                nb_groups--;
                group_len = 0;
                if (nb_groups > 0) key.push_back('-');
            }
        }
        return key;
    }
};