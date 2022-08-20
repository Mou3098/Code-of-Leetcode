class Solution {
public:
    bool isPossible(vector<int>& nums) {
      unordered_map<int, int> seq;
        unordered_map<int, int> count;
        for(auto i : nums) {
            count[i]++;
        }
        for(auto x: nums) {
            if(count[x] == 0) continue;
            if(seq[x-1] > 0) {
                seq[x-1]--;
                seq[x]++;
                count[x]--;
            } else {
                if(count[x+1] == 0 || count[x+2] == 0) return false;
                seq[x+2]++;
                count[x]--;
                count[x+1]--;
                count[x+2]--;
            }
        }
        return true;
    }
};
