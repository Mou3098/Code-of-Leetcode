class Solution {
public:
    vector<int> diStringMatch(string s) {
        vector<int> v;
        int l=0;
        int h=s.size();
        for(int i=0;i<s.size();i++)
        {
            if(s[i] == 'I')
            {
                v.push_back(l);
                l++;
            }
            else
            {
                v.push_back(h);
                h--;
            }
        }
        v.push_back(h);
        return v;
    }
};