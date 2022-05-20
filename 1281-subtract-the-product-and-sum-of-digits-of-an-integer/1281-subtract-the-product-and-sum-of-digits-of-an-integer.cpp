class Solution {
public:
    int subtractProductAndSum(int n) {
        int p=n;
        int mul=1,sum=0;
        while(p)
        {
            int r=p%10;
            mul*=r;
            sum+=r;
            p=p/10;
            
        }
        return mul-sum;
    }
};