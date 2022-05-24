class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        int n=nums.size();
        vector<int> v;
        for(int i=0;i<n;i++)
        {
                auto itPos = v.begin() + index[i];
               v.insert(itPos, nums[i]);
        }
        return v;
    }
};