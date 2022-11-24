class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0)
        {
            return false;
        }
        int c=0;
        for(int i=0;i<32;i++)
        {
            if((n&1)==1)
            {
                break;
            }
            n=n >> 1;
        }
        n=n>>1;
        return n==0;
            
    }
};