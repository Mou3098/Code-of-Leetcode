class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        vector<int> ans;
        vector<int> count(1001,0);
        for(const vector<int>& A :nums)
        {
            for(const int p :A)
        {
           count[p]++; 
        }
        }
        
      for (int i = 1; i < 1001; ++i)
      if (count[i] == nums.size())
        ans.push_back(i);

    return ans;
    }
};