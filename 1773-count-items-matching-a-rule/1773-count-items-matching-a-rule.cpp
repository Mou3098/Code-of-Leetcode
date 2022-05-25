class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
        int n=items.size();
        int c;
        if(ruleKey=="type")
        {
            c=0;
        }
        else if(ruleKey == "color")
        {
            c=1;
        }
        else
        {
            c=2;
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(items[i][c]==ruleValue)
            {
                ans++;
            }
        }
        return ans;
    }
};