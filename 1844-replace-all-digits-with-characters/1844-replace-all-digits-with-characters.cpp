class Solution {
public:
    string replaceDigits(string s) {
        int n=s.size();
        string ans;
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
            {ans+=s[i];}
            else
            {
               ans+=s[i]+s[i-1]-'0'; 
            }
            
        }
        return ans;
    }
};