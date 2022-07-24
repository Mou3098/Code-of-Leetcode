class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int l= matrix.size();
        int m=matrix[0].size();
        for(int i=0;i<l;i++)
        {
            if(binary_search(matrix[i].begin(), matrix[i].end(), target))
                return true;
        }
        return false;
    }
};