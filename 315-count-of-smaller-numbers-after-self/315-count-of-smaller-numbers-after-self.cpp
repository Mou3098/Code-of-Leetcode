class Solution {
public:
    vector<int> countSmaller(vector<int>& nums) {
       vector<int> counts(nums.size());
        vector<pair<int, int>> num_idxs;
        for (int i = 0; i < nums.size(); ++i) {
            num_idxs.emplace_back(nums[i], i);
        }
        countAndMergeSort(&num_idxs, 0, num_idxs.size() - 1, &counts);
        return counts;
    }

    void countAndMergeSort(vector<pair<int, int>> *num_idxs, int start, int end, vector<int> *counts) {
        if (end - start <= 0) {  // The number of range [start, end] of which size is less than 2 doesn't need sort.
            return;
        }
        int mid = start + (end - start) / 2;
        countAndMergeSort(num_idxs, start, mid, counts);
        countAndMergeSort(num_idxs, mid + 1, end, counts);

        int r = mid + 1;
        vector<pair<int, int>> tmp;
        for (int i = start; i <= mid; ++i) {
            // Merge the two sorted arrays into tmp.
            while (r <= end && (*num_idxs)[r].first < (*num_idxs)[i].first) {
                tmp.emplace_back((*num_idxs)[r++]);
            }
            tmp.emplace_back((*num_idxs)[i]);
            (*counts)[(*num_idxs)[i].second] += r - (mid + 1);
        }

        copy(tmp.begin(), tmp.end(), num_idxs->begin() + start);
    }
};