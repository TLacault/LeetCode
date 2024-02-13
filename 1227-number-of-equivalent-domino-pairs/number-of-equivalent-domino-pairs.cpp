class Solution {
public:
    map<vector<int>, int> m;
    int count = 0;
    
    bool isEquiv(vector<int> D1, vector<int> D2) {
        return (D1[0] == D2[0] && D1[1] == D2[1]) || (D1[1] == D2[0] && D1[0] == D2[1]);
    }

    void compareAndStore(vector<int> dominoe) {
        vector<int> reverse = { dominoe[1], dominoe[0] };
        if (m.contains(reverse)) {
            count += m[reverse];
            m[reverse]++;
            return;
        }
        if (m.contains(dominoe)) count += m[dominoe];
        m[dominoe]++;
    }

    int numEquivDominoPairs(vector<vector<int>>& dominoes) {
        for (const auto dominoe : dominoes) {
            compareAndStore(dominoe);
        }
        return count;
    }
};