class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int n=nums.size();
        if(n==1)
            return 0;
        sort(nums.begin(),nums.end());
        int p=nums[n-1]-nums[0];
        
        if((p-2*k)<=0)
            return 0;
        else
            return p-2*k;
    }
};