class Solution {
public:
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) {
        vector<int> b(26, 0);
        for (const auto& s : words2) {
            vector<int> t(26, 0);
            for (const auto& c : s) ++t[c - 'a'];
            for (int i = 0; i < 26; ++i) b[i] = max(b[i], t[i]);
        }
        int L = 0;
        for (int i = 0; i < 26; ++i) L += b[i];
        
        vector<string> ans;
        for (const auto& s : words1) {
            if (s.length() < L) continue;
            
            vector<int> a(26, 0);
            for (const auto& c : s) ++a[c - 'a'];
            
            bool ok = true;
            for (int i = 0; i < 26; ++i) {
                if (a[i] < b[i]) {
                    ok = false;
                    break;
                }
            }
            if (ok) ans.push_back(s);
        }
        return ans;
    }

};