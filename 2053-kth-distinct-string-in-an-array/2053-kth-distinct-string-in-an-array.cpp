class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int> um;
        for(int i=0;i<arr.size();i++)
        {
            um[arr[i]]++;
        }
                int p=0,q=0;
   for (int i = 0; i < arr.size(); i++){
            if (um[arr[i]] == 1) k--;
            if (k == 0) return arr[i];
        }
        return "";
    }
};