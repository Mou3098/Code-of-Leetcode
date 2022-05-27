class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int n=image.size();
        int m=image[0].size();
        int l=m/2;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<l;j++)
            {
                int temp=image[i][j];
                image[i][j]=image[i][n-j-1];
                image[i][n-j-1]=temp;
            }
            for(int j=0;j<m;j++)
            {
                if(image[i][j]==0)
                {
                    image[i][j]=1;
                }
                else
                {
                    image[i][j]=0;
                }
            }
        }
        
        return image;
    }
};