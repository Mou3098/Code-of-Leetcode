class Solution {
public:
    int xorOperation(int n, int start) {
        int ans=start;
        int p=start;
        for(int i=1;i<n;i++)
        {
            p=p+2;
            ans=ans xor p;
        }
        return ans;
    }
};