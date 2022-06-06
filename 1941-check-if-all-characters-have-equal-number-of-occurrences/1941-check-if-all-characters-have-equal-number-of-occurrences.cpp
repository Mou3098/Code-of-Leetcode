class Solution {
public:
    bool areOccurrencesEqual(string s) {
        unordered_map<char, int> freq;
    for_each(begin(s),
                end(s),
                [&freq](const char &c) {
                    freq[c]++;
                });
        int l=freq.size();
        int a[l];
        int i=0;
    for (auto &pair: freq) {
        a[i]=pair.second;
        i++;
    }
        sort(a,a+l);
        if(a[0]==a[l-1])
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};