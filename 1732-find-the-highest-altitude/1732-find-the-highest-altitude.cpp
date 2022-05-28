class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
        vector<int> v(n+1);
        v[0]=0;
        v[1]=gain[0];
        int mx=max(0,v[1]);
        int j=2;
        for(int j=2;j<=n;j++)
        {
            v[j]=v[j-1]+gain[j-1];
            if(v[j]>mx)
            {
                mx=v[j];
            }
        }
        return mx;
    }
};