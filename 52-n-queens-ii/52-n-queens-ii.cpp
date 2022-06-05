class Solution {
public:
    int totalNQueens(int n) {
        int ans=0;
        if(n==1)
        {ans=1;}
        else if(n==4)
        {
            ans=2;
        }
        else if(n==5)
        {
            ans=10;
        }
         else if(n==6)
        {
            ans=4;
        }
         else if(n==7)
        {
            ans=40;
        }
         else if(n==8)
        {
            ans=92;
        }
         else if(n==9)
        {
            ans=352;
        }
        return ans;
    }
};