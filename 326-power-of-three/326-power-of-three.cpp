class Solution {
public:
    bool isPowerOfThree(int n) {
         if(n<=0)
            return false;
        
      
        return abs((log(n) / log(3)) - ceil((log(n) / log(3)))) < 1e-14;
    }
};