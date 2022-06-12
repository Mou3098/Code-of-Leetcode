class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int n=nums.size();
        int i = 0, j = 1;
        set<int> s;
        s.insert(nums[0]);
        int sum=nums[0];
        int maxsum=nums[0];
        while(i<n-1 &&j<n)
        {
            const bool b=s.find(nums[j])==s.end();
            if(b)
            {
                sum+=nums[j];
                s.insert(nums[j]);
                maxsum=max(sum,maxsum);
                j++;
            }
            else
            {
                 sum-=nums[i];
                s.erase(nums[i]);
                i++;
            }
        }
        return maxsum;
    }
};