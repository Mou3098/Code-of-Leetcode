class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int> v;
        sort(nums.begin(),nums.end());
        int len=nums.size();
        for(int i=0;i<len;i++)
        {
            if(nums[i]==target)
            {
                v.push_back(i);
            }
        }
        return v;
    }
};