class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count = 0, tmp_sum = 0;
        unordered_map<int/*prefix_sum*/,int/*count*/> presum;
        presum[0] = 1;
        for(int num : nums) {
            tmp_sum += num;
            if( presum.count( tmp_sum - k ) ) count += presum[tmp_sum-k];
            presum[tmp_sum]++;
        } return count;
    }
};