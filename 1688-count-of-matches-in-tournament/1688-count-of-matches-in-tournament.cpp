class Solution {
public:
    int numberOfMatches(int n) {
        int ans=0;
        int l=0;
        while(n>1)
        {
            ans+=n/2;
            if(n%2)
            {
                l=1;
                n=(n/2)+1;
            }
            else
            {l=0;
            n=n/2;
            }
            
        }
        return ans;
    }
};