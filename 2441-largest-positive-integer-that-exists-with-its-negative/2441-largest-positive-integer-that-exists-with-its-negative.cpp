class Solution {
public:
    int findMaxK(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]<0)
            {
                for(int j=i;j<nums.size();j++)
                {
                    if(nums[i]+nums[j]==0)
                    {
                        return nums[j];
                    }
                }
            }
        }
        return -1;
    }
};