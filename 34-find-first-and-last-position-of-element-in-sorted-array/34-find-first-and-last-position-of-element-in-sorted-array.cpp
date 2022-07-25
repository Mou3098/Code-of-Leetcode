class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first, last;
    first = find(nums.begin(), nums.end(), target) - nums.begin();
    last = upper_bound(nums.begin(), nums.end(), target) - nums.begin() - 1;

    if (first == nums.size()) {
        first = -1;
        last = -1;
    }
        
        vector<int> ans;
        ans.push_back(first);
         ans.push_back(last);
        return ans;
    }
};