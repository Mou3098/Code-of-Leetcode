class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n=mat.size();
        int ans=0;
        for(int i=0;i<n;i++)
        {
            ans+=(mat[i][i]+mat[i][n-i-1]);
        }
        if(n%2)
        {
            int p=n/2;
            ans=ans-mat[p][p];
        }
        
        return ans;
    }
};