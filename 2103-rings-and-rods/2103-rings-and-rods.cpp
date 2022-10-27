class Solution {
public:
    int countPoints(string rings) {
        vector<int> flags(10);
        for(int i=0;i<rings.size();i+=2)
        {
            if(rings[i]=='R')
            {
                flags[rings[i+1]-'0'] |=1;
            }
            else if(rings[i]=='G')
            {
                flags[rings[i+1]-'0'] |=2;
            }
            else
            {
                flags[rings[i+1]-'0'] |=4;
            }
        }
        
        int ans=0;
        for(int i=0;i<10;i++)
        {
            if(flags[i]==7)
            {
                ans++;
            }
        }
        return ans;
    }
};