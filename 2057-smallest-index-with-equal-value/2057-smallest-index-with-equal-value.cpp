class Solution {
public:
    int smallestEqual(vector<int>& nums) {
        for(int i=0;i<nums.size();i++)
        {
            int p=i%10;
            if(p==nums[i])
            {
                return i;
            }
        }
        return -1;
    }
};