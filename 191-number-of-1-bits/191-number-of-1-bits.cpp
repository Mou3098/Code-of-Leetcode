class Solution {
public:
    int hammingWeight(uint32_t n) {
        int temp=1;
        int ans=0;
        while(n)
        {
            int l=n%2;
            if((temp&n)>0)
            {ans++;}
            n>>=1;
        }
        
        return ans;
    }
};