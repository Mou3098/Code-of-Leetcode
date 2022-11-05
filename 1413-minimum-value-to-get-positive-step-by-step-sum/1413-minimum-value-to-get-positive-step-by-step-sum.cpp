class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int p=INT_MAX;
        int q=0;
        for(int i=0;i<nums.size();i++)
        {
            q=q+nums[i];
            p=min(p,q);
        }
        if(p<0)
        {
            return 1-p;
        }
        else
        {
            return 1;
        }
    }
};