class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int r=grid.size();
        int c=grid[0].size();
        vector<vector<int>> vv;
        for(int i=1;i<r-1;i++)
        {
            vector<int> v;
            for(int j=1;j<c-1;j++)
            {
                int p=max(grid[i-1][j-1],grid[i-1][j]);
                int q=max(grid[i][j-1],grid[i-1][j+1]);
                int r=max(grid[i][j],grid[i][j+1]);
                int s=max(grid[i+1][j-1],grid[i+1][j]);
                int t=max(grid[i+1][j+1],max(p,max(q,max(r,s))));
                v.push_back(t);
            }
            vv.push_back(v);
        }
        return vv;
    }
};