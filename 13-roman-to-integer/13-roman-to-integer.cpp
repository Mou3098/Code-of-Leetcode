class Solution {
public:
    int romanToInt(string s) {
        int ans=0;
        int l=s.size();
        for(int i=0;i<l;i++)
        {
            int p=s[i];
            int q=s[i+1];
            if(p==77)
            {
                ans+=1000;
            }
            else if(p==68)
            {
                ans+=500;
            }
            else if(p==67)
            {
                if(q==68)
                {
                    ans+=400;
                    i++;
                }
                else if(q==77)
                {
                    ans+=900;
                    i++;
                }
                else
                {
                    ans+=100;
                }
            }
            else if(p==76)
            {
                ans+=50;
            }
            else if(p==88)
            {
                if(q==76)
                {
                    ans+=40;
                    i++;
                }
                else if(q==67)
                {
                    ans+=90;
                    i++;
                }
                else
                {
                    ans+=10;
                }
            }
            else if(p==86)
            {
                ans+=5;
            }
            else if(p==73)
            {
                if(q==86)
                {
                    ans+=4;
                    i++;
                }
                else if(q==88)
                {
                    ans+=9;
                    i++;
                }
                else
                {
                    ans+=1;
                }
            }
        }
        
        return ans;
    
    }
};