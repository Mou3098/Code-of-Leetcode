class Solution {
public:
    vector<int> numberOfPairs(vector<int>& nums) {
        vector<int> ans;
   unordered_map<int, int> um;
   for (int i = 0; i < nums.size(); i++){
      um[nums[i]]++;
   }
        int p=0,q=0;
   for (auto x : um){
       int z=x.second;
       p+=z/2;
       q+=z%2;
      
   }
        ans.push_back(p);
        ans.push_back(q);
        return ans;
        
        
    }
};