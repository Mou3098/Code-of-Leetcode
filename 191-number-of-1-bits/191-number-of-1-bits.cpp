class Solution {
public:
    int hammingWeight(uint32_t n) {
        int temp=1;
        int ans=0;
        while(n)
        {
            int l=n%2;
            if(l==1)
            {ans++;}
            n=n/2;
        }
        
        return ans;
    }
};