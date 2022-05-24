class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int n=edges.size();
        vector<int> v;
        sort(edges[0].begin(), edges[0].end());
        sort(edges[1].begin(), edges[1].end());
        set_intersection(edges[0].begin(),edges[0].end(),
                          edges[1].begin(),edges[1].end(),
                          back_inserter(v));
        for(int i=1;i<n;i++)
        {
            set_intersection(edges[i-1].begin(),edges[i-1].end(),
                          edges[i].begin(),edges[i].end(),
                          back_inserter(v));
        }
        int ans=v[0];
        return ans;
    }
};