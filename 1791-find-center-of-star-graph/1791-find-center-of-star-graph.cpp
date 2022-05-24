class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int n=edges.size();
        vector<int> v;
        vector<int> v1;
        sort(edges[0].begin(), edges[0].end());
        sort(edges[1].begin(), edges[1].end());
        set_intersection(edges[0].begin(),edges[0].end(),
                          edges[1].begin(),edges[1].end(),
                          back_inserter(v1));
        for(int i=1;i<n;i++)
        {
            set_intersection(v1.begin(),v1.end(),
                          edges[i].begin(),edges[i].end(),
                          back_inserter(v));
        }
        int ans=v[0];
        return ans;
    }
};