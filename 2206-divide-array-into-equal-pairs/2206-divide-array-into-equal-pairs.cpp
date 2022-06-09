class Solution {
public:
    bool divideArray(vector<int>& nums) {
        vector<int> vec(503,0);
        bool ans=true;
        for(int i=0;i<nums.size();i++)
        {
            vec[nums[i]]++;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(vec[nums[i]]%2)
            {
               ans=false;
                break;
            }
        }
        return ans;
    }
};