class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> ans;
        vector<int> v2;
        v2.assign(nums.begin(), nums.end());
        sort(v2.begin(), v2.end());
        int n=v2.size();
        int arr[600];
        for(int i=n-1;i>=0;i--)
        {
            
            arr[v2[i]]=i;
        }
        for(int i=0;i<nums.size();i++)
        {
            ans.push_back(arr[nums[i]]);
        }
        
        return ans;
    }
};