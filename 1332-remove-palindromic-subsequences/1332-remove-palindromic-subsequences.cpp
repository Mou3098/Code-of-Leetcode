class Solution {
public:
    int removePalindromeSub(string s) {
        int l=s.size();
        if(l==0)
            return 0;
        else
        {
            for(int i=0;i<l/2;i++)
            {
                if(s[i]!=s[l-i-1])
                    return 2;
            }
            return 1;
        }
    }
};