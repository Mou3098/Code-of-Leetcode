class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        set<int> set;
        int p=0;
        for(int i = 0; i<nums.size(); i++){
            if(set.find(nums[i])==set.end()){
                set.insert(nums[i]);
            }else{
                p=nums[i];
                break;
            }
        }
        return p;
    }
};