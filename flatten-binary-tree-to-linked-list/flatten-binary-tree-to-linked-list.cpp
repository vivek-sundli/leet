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
    TreeNode* prev = NULL;
public:
    void flatten(TreeNode* root) {
        if(!root) return;
        
        TreeNode* l = root -> left;
        TreeNode* r = root -> right;
        
        if(prev == NULL){
            prev = root;
        }else{
            prev->left = NULL;
            prev->right = root;
            prev = root;
        }
        flatten(l);
        flatten(r);
    }
    
};