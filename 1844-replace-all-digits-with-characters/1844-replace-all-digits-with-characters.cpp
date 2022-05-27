class Solution {
public:
    string replaceDigits(string s) {
        string ans="";
        int i,n=s.length();
        for(i=0;i<n;i++)
        {
            
            if(i%2==1)
            {int c = s[i]-'0';
                ans+=(char) (s[i-1]+c);
            }
            else
                ans+=s[i];
        }
        return ans;
    }
};