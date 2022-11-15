class Solution {
public:
    bool checkAlmostEquivalent(string word1, string word2) {
        vector<int> c1(27,0),c2(27,0);
        for(int i=0;i<word1.size();i++)
        {
            c1[word1[i]-'a']++;
        }
        for(int i=0;i<word2.size();i++)
        {
            c2[word2[i]-'a']++;
        }
        int ans=0;
        for(int i=0;i<26;i++)
        {
            int ans1=(abs(c1[i]-c2[i]));
            if(ans1>3)
            {
                ans=1;
                break;
            }
        }
        if(ans)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
};