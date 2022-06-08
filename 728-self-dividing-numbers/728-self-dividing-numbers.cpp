class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> v;
        for(int i=left;i<=right;i++)
        {
            int n=i;
            bool ans=true;
            while(n && ans)
            {
                int r=n%10;
                if(r==0 || i%r)
                {
                    ans= false;
                }
                n/=10;
               
            }
             if(ans)
                {
                    v.push_back(i);
                }
        }
        return v;
    }
};