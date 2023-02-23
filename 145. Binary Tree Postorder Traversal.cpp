class Solution {
public:
    void postorder(TreeNode *root,vector<int> &vct)
    {
        if(root==NULL)
            return ;
        postorder(root->left,vct);
        postorder(root->right,vct);
        vct.push_back(root->val);
    } 
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> vct;
        postorder(root,vct);
        return vct;
    }
};
