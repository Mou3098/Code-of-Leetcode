class Solution {
public:
    bool digitCount(string num) {
        if(num.size()==1)
        {
            int p=num[0]-48;
           return false;
        }
        string s=num;
        
        int b=1;
        vector<int> f(10,0);
        for(int i=0;i<num.size();i++)
        {
            int p=num[i]-48;
            f[p]++;
        
        }
        for(int i=0;i<s.size();i++)
        {
            
            int p=s[i]-'0';
            if(s[p]-'0'!=f[p])
            {
                b=0;
                break;
            }
        }
        
        
        if(b)
            return true;
        else
            return false;
        
        
    }
};