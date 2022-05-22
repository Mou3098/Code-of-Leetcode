class Solution {
public:
   
    int countSubstrings(string s) {
        int n=s.size();
        int count=0;
        for(int i=0;i<n;i++)
        {
            palindromic(s, i, i, count);
            palindromic(s, i, i+1, count);
        }
        return count;
    }
    
    void palindromic(string s, int left, int right, int &count){ 
        while(left >= 0 && right < s.size() && s[left] == s[right]) {
            count++;
            left--;
            right++;
            
        }
    }
};