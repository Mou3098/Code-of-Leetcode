class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        vector<int> v;
        int n=prices.size();
        int j;
        for(int i=0;i<n-1;i++)
        {
            bool p=1;
            j=i+1;
            for(j = i+1; j < n; j++){
            {
                if(prices[j]<=prices[i])
                {
                    prices[i]-=prices[j];
                    break;
                }
            }
        }
        }
        return prices;
    }
};