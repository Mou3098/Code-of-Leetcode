class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        vector<int> v(10000,0);
        int p=0;
        for(int i=0;i<=(nums.size()/2)+1;i++)
        {
            v[nums[i]]++;
            if(v[nums[i]]>=2)
            {
               p=nums[i];
            }
        }
        return p;
    }
};