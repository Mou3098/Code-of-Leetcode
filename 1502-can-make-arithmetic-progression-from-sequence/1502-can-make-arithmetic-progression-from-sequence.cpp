class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int p=arr[1]-arr[0];
        for(int i=1;i<arr.size()-1;i++)
        {
            int q=arr[i+1]-arr[i];
            if(q!=p)
            {
                return false;
            }
        }
        return true;
    }
};