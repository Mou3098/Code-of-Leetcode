class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
      int arr[101]={0};
        
      for(int i=0;i<nums.size();i++)
      {
          arr[nums[i]]++;
      }
        int ans=0;
       for(int i=0;i<nums.size();i++)
      {
          if(arr[nums[i]]==1)
          {
              ans+=nums[i];
          }
      } 
        return ans;
    }
};