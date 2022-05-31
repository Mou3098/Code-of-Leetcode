class Solution {
public:
    bool hasAllCodes(string s, int k) {
       set<string> st;
        int no_of_combination =1<<k;
        for(int i=0;i+k<=s.size();i++)
        {
            st.insert(s.substr(i,k));
        }
        return st.size() == no_of_combination;
    }
};