class Solution {
public:
    const int m = 1e9 + 7;
    int kInversePairs(int n, int k) {
        vector < vector <int> > dp(n + 1, vector <int>(k + 1));
      dp[0][0] = 1;
      for(int i = 1; i <= n; i++){
         dp[i][0] = 1;
         for(int j = 1; j <= k; j++){
            dp[i][j] = dp[i][j - 1] + dp[i - 1][j];
            dp[i][j] %= m;
            if(j >= i){
               dp[i][j] = (dp[i][j] - dp[i - 1][j - i] + m) % m;
            }
         }
      }
      return dp[n][k];
    }
};