class Solution {
public:
    double calculateTax(vector<vector<int>>& brackets, int income) {
        if(income==0){return 0;}
        double ans=0;
        double prev = 0; 
        for(int i=0;i<brackets.size();i++)
        {
            ans += (min(income, brackets[i][0]) - prev) * brackets[i][1]; 
            prev = min(income, brackets[i][0]); 
        }
        return ans/100;
    }
};