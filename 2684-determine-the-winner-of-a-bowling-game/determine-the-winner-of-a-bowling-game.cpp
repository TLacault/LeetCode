class Solution {
public:
    int isWinner(vector<int>& player1, vector<int>& player2) {
        int double_1 = 0;
        int score_1 = 0;

        int double_2 = 0;
        int score_2 = 0;

        for (int i = 0; i < player1.size(); i++) {
            score_1 += (double_1-- > 0) ? 2 * player1[i] : player1[i];
            if (player1[i] == 10) double_1 = 2;
            cout << score_1 << endl;
            score_2 += (double_2-- > 0) ? 2 * player2[i] : player2[i];
            if (player2[i] == 10) double_2 = 2;
            cout << score_2 << endl;
        }
        if (score_1 == score_2) return 0;
        if (score_1 > score_2) return 1;
        return 2;
    }
};