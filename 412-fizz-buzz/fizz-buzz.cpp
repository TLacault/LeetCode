class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> answer(n);
        for (int i = 1; i <= n; i++) {
            if (i % 3 == 0) answer[i-1].append("Fizz");
            if (i % 5 == 0) answer[i-1].append("Buzz");
            if (i % 3 != 0 && i % 5 != 0) answer[i-1].append(to_string(i));
        }
        return answer;
    }
};