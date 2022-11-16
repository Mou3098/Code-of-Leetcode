class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0)
        {
            return 1;
        }
        vector<int> v;
        while(n)
        {
            v.push_back(n%2);
            n/=2;
        }
        reverse(v.begin(),v.end());
        for(int i=0;i<v.size();i++)
        {
            if(v[i]==1)
            {
                v[i]=0;
            }
            else
            {
                v[i]=1;
            }
        }
        int two = 1;
    for (int i = v.size() - 1; i >= 0; i--) {
        n = n + v[i] * two;
        two = two * 2;
    }
    return n;
        
    }
        
};