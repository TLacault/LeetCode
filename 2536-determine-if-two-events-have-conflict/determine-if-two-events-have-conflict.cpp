class Solution {
public:
    bool haveConflict(vector<string>& event1, vector<string>& event2) {
        string s_h1; s_h1.push_back(event1[1][0]); s_h1.push_back(event1[1][1]); int h1 = stoi(s_h1);
        string s_m1; s_m1.push_back(event1[1][3]); s_m1.push_back(event1[1][4]); int m1 = stoi(s_m1);
        string s_h2; s_h2.push_back(event2[0][0]); s_h2.push_back(event2[0][1]); int h2 = stoi(s_h2);
        string s_m2; s_m2.push_back(event2[0][3]); s_m2.push_back(event2[0][4]); int m2 = stoi(s_m2);
        
        if (h1 < h2) return false;
        if (h1 == h2 && m1 < m2) return false;


        s_h1 = ""; s_h1.push_back(event1[0][0]); s_h1.push_back(event1[0][1]); h1 = stoi(s_h1);
        s_m1 = ""; s_m1.push_back(event1[0][3]); s_m1.push_back(event1[0][4]); m1 = stoi(s_m1);
        s_h2 = ""; s_h2.push_back(event2[1][0]); s_h2.push_back(event2[1][1]); h2 = stoi(s_h2);
        s_m2 = ""; s_m2.push_back(event2[1][3]); s_m2.push_back(event2[1][4]); m2 = stoi(s_m2);
        
        if (h1 > h2) return false;
        if (h1 == h2 && m1 > m2) return false;

        return true;
    }
};