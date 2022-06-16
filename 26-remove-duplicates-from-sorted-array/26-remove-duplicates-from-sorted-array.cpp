class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        vector<int> nums1;
        set<int> s;
        for(int i=0;i<n;i++)
        {
            s.insert(nums[i]);
        }
       set<int>::iterator it = s.begin();
    while (it != s.end()) {
      nums1.push_back(*it);
      it++;
        }
        nums=nums1;
        return s.size();
        
    }
};