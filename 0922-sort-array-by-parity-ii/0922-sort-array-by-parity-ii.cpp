class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int> v;
        vector<int> od;
        vector<int> ev;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2==0)
            {
                ev.push_back(nums[i]);
            }
            else
            {
                od.push_back(nums[i]);
            }
        }
        
        for(int i=0;i<nums.size()/2;i++)
        {
            v.push_back(ev[i]);
            v.push_back(od[i]);
        }
        return v;
    }
};