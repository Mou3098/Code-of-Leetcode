class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int n=sentences.size();
        int ans=-1;
        for(int i=0;i<n;i++)
        {
            int word=0;
            for(int j=0;j<sentences[i].size();j++)
            {
                if(sentences[i][j]==' ')
                {
                    word++;
                }
            }
                word++;
            ans=max(word,ans);
        }
        return ans;
    }
};