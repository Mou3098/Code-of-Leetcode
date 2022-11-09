class Solution {
public:
    string makeGood(string s) {
        string s1;
        for(int i=0;i<s.size();i++)
        {
            
            if((!s1.empty()) && (abs(s1.back()-s[i])==32))
            {
                s1.pop_back();
            }
            else
            {
                s1.push_back(s[i]);
            }
        }
        return s1;
    }
};