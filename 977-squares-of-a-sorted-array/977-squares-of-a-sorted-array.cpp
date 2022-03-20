class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> v;
        int l=nums.size();
        for(int i=0;i<l;i++)
        {
            int p=pow(nums[i],2);
            v.push_back(p);
        }
        sort(v.begin(),v.end());
        return v;
    }
};