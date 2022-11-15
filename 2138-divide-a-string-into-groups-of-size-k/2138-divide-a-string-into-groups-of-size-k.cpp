class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string> ans;
        int c=0;
        string s1[101];
        int j=0;
        for(int i=0;i<s.size();i++)
        {
            if(i!=0 && i%k==0)
            {
                j++;
            }
            s1[j].push_back(s[i]);
        }
        int p=s1[j].size();
        while(p<k)
        {
            s1[j].push_back(fill);
            p++;
        }
        for(int z=0;z<=j;z++)
        {
            ans.push_back(s1[z]);
        }
        return ans;
    }
};