class Solution {
public:
    bool hasAllCodes(string s, int k) {
        set<string> substr_set;
        int len = s.size();
        int no_of_comb = (1<<k);
        cout<<no_of_comb<<endl;
        for(int i = 0; i+k <= len ; i++){
            substr_set.insert(s.substr(i,k));
        }
        return substr_set.size() == no_of_comb;
    }
};