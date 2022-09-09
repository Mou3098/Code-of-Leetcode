class Solution {
public:
    int numberOfWeakCharacters(vector<vector<int>>& properties) {
        int n = properties.size(), ans = 0, maxdef = 0;
        sort(properties.begin(), properties.end(), cmp);
        for (int i = 0; i < n; i++) {
            if (properties[i][1] < maxdef)
                ans++;
            else
                maxdef = max(maxdef, properties[i][1]);
        }
        return ans;      
    }

    static bool cmp(vector<int>& a, vector<int>& b) {
        if (a[0] != b[0])
            return a[0] >= b[0];
        return a[1] <= b[1];
    }
};