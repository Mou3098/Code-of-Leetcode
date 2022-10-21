class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
    map<int, string, greater<int> > m;
    vector<string> v;
        
    for(int i = 0; i < names.size(); i++) {
        m[heights[i]] = names[i];
    }
    for(auto it : m) {
        v.push_back(it.second);
    }
    return v;
    }
};