class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> v;
        int n=candies.size();
        int mx=-2;
        for(int i=0;i<n;i++)
        {
            mx=max(mx,candies[i]);
        }
        for(int i=0;i<n;i++)
        {
            int l=candies[i];
            if((l+extraCandies)>=mx)
            {
                v.push_back(1);
            }
            else
            {
                v.push_back(0);
            }
        }
        return v;
    }
};