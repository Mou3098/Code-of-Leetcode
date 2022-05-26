class Solution {
public:
    int minBitFlips(int start, int goal) {
        int ans=0;
        while(start || goal)
        {
            int p=start%2;
            int q=goal%2;
            if(p^q)
            {ans++;}
            start>>=1;
            goal>>=1;
        }
        return ans;
    }
};