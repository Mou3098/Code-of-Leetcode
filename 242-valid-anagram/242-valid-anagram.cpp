class Solution {
public:
    bool isAnagram(string s, string t) {
        
        int l = s.length();
        int fMap [200] = {0};
        if (t.length() != l) return false;
        for (int i = 0; i < l; i++)
            fMap[int(s[i])]++;
        for (int i = 0; i < l; i++)
            if (fMap[int(t[i])]-- == 0) return false;
        return true;
    }
};