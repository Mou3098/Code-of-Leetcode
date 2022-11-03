class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        vector<vector<int>> ans;
        vector<int> sans;
        int dist=INT_MAX;
        for(int i=0;i<arr.size()-1;i++)
        {
            int p=arr[i+1]-arr[i];
            dist=min(p,dist);
        }
        for(int i=0;i<arr.size()-1;i++)
        {
            if(arr[i+1]-arr[i]==dist)
            {
                sans.push_back(arr[i]);
                sans.push_back(arr[i+1]);
            }
            if(sans.size()>0)
            {ans.push_back(sans);
            sans.clear();}
        }
        return ans;
    }
};