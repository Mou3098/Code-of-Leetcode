class Solution {
public:
    int calPoints(vector<string>& ops) {
        int len=ops.size();
        vector<int> v;
        int ans=0;
        for(int i=0;i<len;i++)
        {
            if(ops[i]=="C")
            {
                v.pop_back();
            }
            else if(ops[i]=="+")
            {
                int p=v.size();
                int q=v[p-1]+v[p-2];
                v.push_back(q);
            }
            else if(ops[i]=="D")
            {
                int p=v.size();
                int q=v[p-1]*2;
                v.push_back(q);
            }
            else
            {
                int p=stoi(ops[i]);
                v.push_back(p);
            }
        }
        
        int len2=v.size();
        for(int i=0;i<len2;i++)
        {
            ans+=v[i];
        }
        return ans;
    }
};