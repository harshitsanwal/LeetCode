class Solution {
public: bool compare(TreeNode* a,TreeNode* b){
    if(a==NULL&&b==NULL)
    return 1;
    if(a==NULL||b==NULL)
    return 0;
    if(a->val!=b->val)
    return 0;
    return (compare(a->left,b->right)&&compare(a->right,b->left));
   
}
    bool isSymmetric(TreeNode* root) {
        if(root==NULL)
        return 1;
        return compare(root->left,root->right);
    }
};