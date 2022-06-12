class Solution {
public:
    bool judgeCircle(string moves) {
        bool b=0;
        unordered_map<char, int> f;
        for(int i=0;i<moves.size();i++)
        {
            if(f.find(moves[i])==f.end())
            {
                f.insert(make_pair(moves[i], 1));
            }
            else
            {
                f[moves[i]]++;
            }
        }
        int u=0,r=0,l=0,d=0;
        for (auto& it : f) {\
            if(it.first=='U')
            {
                u=it.second;
            }
             else if(it.first=='D')
            {
                d=it.second;
            }
             else if(it.first=='L')
            {
                l=it.second;
            }
             else
            {
                r=it.second;
            }
            
    }
        if(u==d&&l==r)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};