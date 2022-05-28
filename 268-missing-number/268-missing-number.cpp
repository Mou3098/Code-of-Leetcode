class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int arr[n+3];
         for(int i=0;i<nums.size()+1;i++)
        {
            arr[i]=0;
        }
        for(int i=0;i<nums.size();i++)
        {
            arr[nums[i]]++;
        }
        int ans;
        for(int i=0;i<nums.size()+1;i++)
        {
            if(arr[i]!=1)
            {
                ans=i;
            }
        }
        return ans;
    }
};