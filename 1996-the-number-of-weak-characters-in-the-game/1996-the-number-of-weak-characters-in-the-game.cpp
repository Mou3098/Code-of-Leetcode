class Solution {
public:
    static bool cmp(vector<int>&a, vector<int>&b){
        if(a[0]==b[0]) return a[1]<b[1];
        else return a[0]>b[0];
    }
    int numberOfWeakCharacters(vector<vector<int>>& properties) {
        int count=0;
        sort(properties.begin(),properties.end(),cmp);
        int defense=properties[0][1];
        for(int i=1;i<properties.size();i++)
        {
           if(properties[i][1]<defense) count++;
           else defense=properties[i][1];
        }
        return count;
    }
};