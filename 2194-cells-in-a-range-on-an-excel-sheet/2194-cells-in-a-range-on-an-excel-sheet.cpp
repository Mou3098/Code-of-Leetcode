class Solution {
public:
    vector<string> cellsInRange(string s) {
        vector<string> v;
        int start=s[1]-'0';
        int end=s[4]-'0';
        char st=s[0];
        char en=s[3];
        for(int i=st;i<=en;i++)
        {
            for(int j=start;j<=end;j++)
            {
                char q=j+'0';
                string p="";
                p+=char(i);
                p+=char(q);
                v.push_back(p);
            }
        }
        return v;
    }
};