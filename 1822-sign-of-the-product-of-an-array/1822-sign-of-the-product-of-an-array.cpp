class Solution {
public:
    int arraySign(vector<int>& nums) {
        bool zero=false;
        int neg=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                zero=true;
                break;
            }
            else if(nums[i]<0)
            {neg++;}
        }
        
        if(zero)
        {
            return 0;
        }
        else if(neg%2==0)
        {return 1;}
        else
        {return -1;}
    }
};