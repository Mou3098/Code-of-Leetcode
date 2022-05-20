class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int n=operations.size();
        int po=0;
        int ne=0;
        for(int i=0;i<n;i++)
        {
            if(operations[i]=="--X")
            {
                ne++;
            }
            else if(operations[i]=="X--")
            {
                ne++;
            }
            else
            {
                po++;
            }
        }
        return po-ne;
    }
};