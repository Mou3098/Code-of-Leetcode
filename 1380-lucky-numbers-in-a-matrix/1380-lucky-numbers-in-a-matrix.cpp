class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        
        int r=matrix.size();
        int c=matrix[0].size();
        
        vector<int> row_min(r,0);
        vector<int> col_max(c,0); 
        
        for(int i=0;i<r;i++)
        {
            int p=INT_MAX;
            for(int j=0;j<c;j++)
            {
                p=min(matrix[i][j],p);
            }
           row_min[i]=p;
           
        }
       
        
         for(int i=0;i<c;i++)
        {
            int p=INT_MIN;
            for(int j=0;j<r;j++)
            {
                p=max(matrix[j][i],p);
            }
           col_max[i]=p;
        
        }
        
         unordered_set<int> s;
        for(int i=0;i<r;i++)
        s.insert(row_min[i]);
    for(int i=0;i<c;i++)
        if(s.count(col_max[i]))
            return {col_max[i]};
    return {};
    }
};