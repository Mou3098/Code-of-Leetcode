class Solution {
public:
    int minimumOperations(vector<int>& nums) {
         unordered_set<int> s;
        int temp =0,res=0;
    for (int i = 0; i < nums.size(); i++) {
        if(nums[i]==0){
            temp=1;
        }
        if (s.find(nums[i]) == s.end()) {
            s.insert(nums[i]);
            res++;
        }
    }
        if(temp)
        {
            return res-1;
        }
        else
        {
            return res;
        }
    }
};