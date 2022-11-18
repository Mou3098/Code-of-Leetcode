class Solution {
public:
    int findLucky(vector<int>& arr) {
        vector<int> l(501,0);
        for(int i=0;i<arr.size();i++)
        {
            l[arr[i]]++;
        }
        int ans=-1;
        for(int i=1;i<l.size();i++)
        {
            if(l[i]==i)
            {
                ans=i;
            }
        }
        return ans;
    }
};