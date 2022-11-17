class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        int p=candyType.size()/2;
        vector<int>::iterator ip;
        int count;
        sort(candyType.begin(), candyType.end());
        count = distance(candyType.begin(),
        unique(candyType.begin(), candyType.begin() + candyType.size()));
        if(count<p)
        {
            return count;
        }
        else
        {
            return p;
        }
    }
};