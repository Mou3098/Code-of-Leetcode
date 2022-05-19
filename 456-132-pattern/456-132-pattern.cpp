class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        int len=nums.size();
        if(len<3)
        {return false;}
        vector<int> min_num(len);
        min_num[0]=nums[0];
        for(int i=1;i<len;i++)
        {
            min_num[i]=min(min_num[i-1],nums[i]);
        }
        stack<int> s;
        for(int i=len-1;i>0;i--)
        {
            while(!s.empty()&& s.top()<=min_num[i-1])
            {
                s.pop();
            }
            if(!s.empty() && s.top() <nums[i])
            {
                return true;
            }
            s.push(nums[i]);
        }
        return false;
    }
};