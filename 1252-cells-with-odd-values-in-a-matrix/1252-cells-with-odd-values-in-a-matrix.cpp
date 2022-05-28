class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        int cnt=0;
        int arr[m][n];
        memset( arr, 0, sizeof(arr) );
        int l=indices.size();
        for(int i=0;i<l;i++)
        {
            int p=indices[i][0];
            int q=indices[i][1];
            for(int j=0;j<n;j++)
            {
                arr[p][j]++;
            }
            for(int j=0;j<m;j++)
            {
                arr[j][q]++;
            }
        }
          for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(arr[i][j]%2)
                {
                    cnt++;
                }
            }
        }
        return cnt;
        
    }
};