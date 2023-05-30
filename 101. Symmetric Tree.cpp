class Solution {
public:
    bool checkSymmetric(TreeNode *left,TreeNode *right)
    {
        if(left==NULL || right==NULL) return left==right;

        if(left->val!=right->val)
        {
            return false;
        }  
        return checkSymmetric(left->left,right->right)&& checkSymmetric(left->right,right->left);      
    }
    bool isSymmetric(TreeNode* root) {
        if(root==NULL)
        {
            return true;
        }
        return checkSymmetric(root->left,root->right);
        
    }
};
