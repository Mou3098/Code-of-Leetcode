class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> v;
        set<int> hs;
 
    
    for (int i = 0; i < nums1.size(); i++)
        hs.insert(nums1[i]);
 
    for (int i = 0; i <nums2.size() ; i++)
    {if (hs.find(nums2[i]) != hs.end())
       { v.push_back(nums2[i]);  }  
    }
        sort(v.begin(), v.end());
        vector<int>::iterator ip;
    ip = unique(v.begin(), v.begin() + v.size());
    v.resize(distance(v.begin(), ip));
    return v;
    
    }
};