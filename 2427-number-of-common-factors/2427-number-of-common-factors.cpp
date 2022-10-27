class Solution {
public:
    int commonFactors(int a, int b) {
        int p=gcd(a,b);
      
        int ans=1;
        for(int i=2;i<=p;i++)
        {
            ans += a % i == 0 && b % i == 0;
        }
        return ans;
    }
};