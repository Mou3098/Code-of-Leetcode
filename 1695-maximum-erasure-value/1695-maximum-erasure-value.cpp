class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int n=nums.size();
        int i = 0, j = 1;
  set<int> set;
 
  set.insert(nums[0]);
 
  int sum = nums[0];
 
  int maxsum = sum;
 
  while (i < n - 1 && j < n)
  {
    const bool is_in = set.find(nums[j]) ==
                       set.end();
    if (is_in)
    {
      sum = sum + nums[j];
      maxsum = max(sum, maxsum);
      set.insert(nums[j]);
        j++;
    }

    else
    {
      sum -= nums[i];
      set.erase(nums[i]);
        i++;
    }
  }
 
  return maxsum;
    }
};