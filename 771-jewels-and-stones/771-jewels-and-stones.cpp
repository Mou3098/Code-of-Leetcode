class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int n=stones.size();
        int arr[300]={0};
        for(int i=0;i<n;i++)
        {
            arr[stones[i]]++;
        }
        int ans=0;
        for(int i=0;i<jewels.size();i++)
        {
            ans+=arr[jewels[i]];
        }
        return ans;
    }
};