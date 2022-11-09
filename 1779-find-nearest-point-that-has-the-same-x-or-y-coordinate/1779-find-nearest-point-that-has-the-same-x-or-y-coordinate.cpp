class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
    int ans = -1;
    int minDist = INT_MAX;

    for (int i = 0; i < points.size(); ++i) {
      int dx = abs(x - points[i][0]);
      int dy = abs(y - points[i][1]);
      if (dx == 0 || dy == 0) {
        int dist = dx + dy;
        if (dist < minDist) {
          minDist = dist;
          ans = i;
        }
      }
    }

    return ans;
    }
};