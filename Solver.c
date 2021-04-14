/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int min(int a, int b){
    if(a < b){
        return a;
    }
    return b;
}

int minDepth(struct TreeNode* root){
    if(!root){
        return 0;
    }
    if(!root->right) return minDepth(root->left) + 1;
    if(!root->left) return minDepth(root->right) + 1;
    return min(minDepth(root->left), minDepth(root->right)) + 1;
}
