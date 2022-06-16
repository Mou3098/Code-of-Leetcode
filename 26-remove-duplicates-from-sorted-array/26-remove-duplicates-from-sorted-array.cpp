class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        vector<int> v;
        v.push_back(nums[0]);
        for(int i=1;i<n;i++)
        {
            int p=v[v.size()-1];
            if(p==nums[i])
            {
                continue;
            }
            else
            {
                v.push_back(nums[i]);
            }
        }
        
        nums=v;
        
        return v.size();
      
    }
};