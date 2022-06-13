class Solution {
public:
    int helper(vector<vector<int>>& A, int i, int j){
    // Base Case 
    if(i == A.size() ){
      return 0 ;
    }
   
    int mn ;
 int n = A.size();
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int minimum = INT_MAX;
        // the maximum element in each row is equal to row
        // number
        for (int j = 0; j <= i; j++) {
            if (i == 0 && j == 0) {
                // if both zero means first element
                minimum = min(minimum, A[i][j]);
                continue;
            }
            // if j==i means the last element so we will not
            // calculate up of the last element
            if (j == i) {
                A[i][j] = A[i][j] + A[i - 1][j - 1];
                minimum = min(minimum, A[i][j]);
                continue;
            }
            // The value at i,j will be calculated using
            // [i-1][j-1] or either [i-1][j] either the
            // element just above or the left of the upper
            // row
            int up = A[i][j], down = A[i][j];
            if (j > 0) {
                up += A[i - 1][j - 1];
            }
            else {
                up = INT_MAX;
            }
            down += A[i - 1][j];
            A[i][j] = min(up, down);
            // This minimum is to keep track of the minimum
            // from each row so that we don't have to
            // calculate it separately
            minimum = min(minimum, A[i][j]);
        }
        ans = minimum;
    }
 
    return ans;
}
 
 
int minSumPath(vector<vector<int>>& A) {
    return helper(A, 0, 0) ;
}
    int minimumTotal(vector<vector<int>>& triangle) {
    return minSumPath(triangle);
    }
};