class Solution {
public:
    int numSubmatrixSumTarget(vector<vector<int>>& matrix, int target) {
        int res = 0, m = matrix.size(), n = matrix[0].size();
        vector<vector<int>> presum(m, vector<int>(n + 1, 0));
        
        for (int i = 0; i < m; i++) {
            for (int j = 1; j < n + 1; j++) {
                presum[i][j] += presum[i][j - 1] + matrix[i][j - 1];
            }
        }

        unordered_map<int, int> counter;
        for (int col1 = 0; col1 < n + 1; col1++) {
            for (int col2 = col1 + 1; col2 < n + 1; col2++) {
                counter = {{0,1}};
                int cur = 0;
                for (int row = 0; row < m; row++) {
                    cur += presum[row][col2] - presum[row][col1];
                    res += counter.find(cur - target) != counter.end() ? counter[cur - target] : 0;
                    counter[cur]++;
                }
            }
        }
        return res;
    }
};