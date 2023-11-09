class Solution {
public:
    int maxNumberOfBalloons(string text) {
        vector<int> letters(26, 0);
        for (auto c : text) letters[c - 97]++;
        int min = letters['b' - 97];
        min = (min > letters['a' - 97]) ?  letters['a' - 97] : min;
        min = (min > letters['l' - 97] / 2) ? letters['l' - 97] / 2 : min;
        min = (min > letters['o' - 97] / 2) ? letters['o' - 97] / 2 : min;
        min = (min > letters['n' - 97]) ? letters['n' - 97] : min;
        return min;
    }
};