class Solution {
public:
    int dist(int x1, int y1, int x2, int y2) {
        return abs(x1 - x2) + abs(y1 - y2);
    }

    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        // int min_dist = dist(x, y, points[0]!.first(), points[0]!.second());
        int min_dist = INT_MAX;
        int idx = -1;

        for (int i = 0; i < points.size(); i++) {
            if (points[i][0] != x && points[i][1] != y) continue;

            int current_dist = dist(x, y, points[i][0], points[i][1]);
            if (current_dist < min_dist) {
                min_dist = current_dist;
                idx = i;
            }
        }   
        return idx;
    }
};