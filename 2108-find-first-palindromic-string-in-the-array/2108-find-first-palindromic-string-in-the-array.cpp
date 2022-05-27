class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(int i=0;i<words.size();i++)
        {
            int temp=1;
            int l=words[i].size();
		for(int j = 0; j<= l/2; j++) {
			if(words[i][j] != words[i][l-j-1]) 
            {
                temp=0;
            }
		}
            if(temp)
            {
                return words[i];
            }
        }
		return "";
        }
};