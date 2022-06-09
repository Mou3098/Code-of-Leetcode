class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int m=word1.size();
        int n=word2.size();
        int p=m,q=n;
        int x;
        if(m>n)
        {
            x=1;
        }
        else if(n>m)
        {
            x=0;
        }
        string s="\0";
        int i=0,j=0;
        while(m&&n)
        {
            s+=word1[i];
            s+=word2[i];
            i++;
            j+=2;
            m--;
            n--;
        }
        if(x)
        {
            while(i<p)
                    {s+=word1[i];i++; }
           
        }
        else
                {
                    while(i<q)
                    {s+=word2[i];i++; }
                }
        return s;
    }
};