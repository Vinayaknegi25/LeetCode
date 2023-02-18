class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        TreeNode *temp=NULL;
        if(root==NULL)
            return root;
        temp=root->left;
        root->left=root->right;
        root->right=temp;
        invertTree(root->left);
        invertTree(root->right);

        return root;
    }
};
