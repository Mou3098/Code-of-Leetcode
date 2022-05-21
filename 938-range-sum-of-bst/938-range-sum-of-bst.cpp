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
    int rangeSumBST(TreeNode* root, int low, int high) {
        int res=0;
        inorder(root,res,low,high);
        return res;
    }
    
    void inorder(TreeNode* root,int &res,int low,int high)
    {
        if (!root) return;
       
        if(root->left)
        {
            inorder(root->left,res,low,high);
        }
        int p=(root->val);
        if(p>=low&&p<=high)
        {
            res+=p;
        }
        if(root->right)
        {
            inorder(root->right,res,low,high);
        }
    }

};