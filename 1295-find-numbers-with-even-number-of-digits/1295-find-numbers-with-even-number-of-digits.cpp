class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            int p=floor(log10(nums[i]));
            if(p%2)
            {
                ans++;
            }
        }
        return ans;
    }
};