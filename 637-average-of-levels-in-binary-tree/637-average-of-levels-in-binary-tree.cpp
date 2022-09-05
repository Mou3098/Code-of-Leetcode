/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        vector<double> res;
        while(q.size())
        {
            double s=0;
            double qlen=q.size();
            for(int i=0;i<qlen;i++){ 
                TreeNode* curr=q.front();
                q.pop();
                s+=curr->val;
                if(curr->left)q.push(curr->left);
                if(curr->right)q.push(curr->right);
            }
            res.push_back(s/qlen);
        }
        return res;
    }
};