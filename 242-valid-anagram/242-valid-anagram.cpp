class Solution {
public:
    bool isAnagram(string s, string t) {
        
        map<char, int> f;
        for(int i=0;i<s.size();i++)
        {
            if(f.find(s[i])==f.end())
            {
                f.insert(make_pair(s[i], 1));
            }
            else
            {
                f[s[i]]++;
            }
        }
        map<char, int> f1;
        for(int i=0;i<t.size();i++)
        {
            if(f1.find(t[i])==f1.end())
            {
                f1.insert(make_pair(t[i], 1));
            }
            else
            {
                f1[t[i]]++;
            }
        }
        if (f == f1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};