class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> m;
        for(int i=0;i<arr.size();i++)
        {
            m[arr[i]]++;
        }
        unordered_map<int,int> mp;
        for(auto it = m.begin(); it != m.end(); it++){
            mp[it->second]++;
        }

        for(auto x = mp.begin(); x != mp.end(); x++){
            if((x->second) > 1){
                return false;
            }
        }
        return true;
    }
};