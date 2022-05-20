class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int n=accounts.size();
        int res=-1;
        for(int i=0;i<n;i++)
        {
            int p=0;
            int len=accounts[i].size();
            for(int j=0;j<len;j++)
            {
                p+=accounts[i][j];
            }
            res=max(p,res);
        }
        return res;
    }
};