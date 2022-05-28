class Solution {
public:
    int maximum69Number (int num) {
        int num1=num;
        int i=0;
        int q=100;
        while(num1)
        {
            int p=num1%10;
            num1/=10;
            if(p==6)
            {
                q=i;
            }
            i++;
        }
        int ans;
        if(q==100)
        {
            ans=num;
        }
        else
        {
            ans=num+(3*pow(10,q));
        }
        return ans;
    }
};