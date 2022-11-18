class Solution {
public:
    int minMaxGame(vector<int>& nums) {
        if(nums.size()==1)
        {
            return nums[0];
        }
        else if(nums.size()==2)
        {
            return min(nums[0],nums[1]);
        }
        
        vector<int> n(nums.size()/2);
        for(int i=0;i<nums.size()/2;i++)
        {
            if(i%2==0){
                n[i]=min(nums[2*i],nums[2*i+1]);
            }
            else
            {
                n[i]=max(nums[2*i],nums[2*i+1]);
            }
        }
        int ans=minMaxGame(n);
        return ans;
    }
};