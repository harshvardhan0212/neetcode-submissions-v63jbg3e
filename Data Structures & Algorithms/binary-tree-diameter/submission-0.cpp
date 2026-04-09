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

    int maxlength(TreeNode* root){

        if(root == NULL)
        return NULL;

         int left = maxlength(root ->left);
        int right = maxlength(root->right);
       
        return 1+ max(left,right);
    }
    int diameterOfBinaryTree(TreeNode* root) {

        if(root == NULL)
        return 0;
         int option2 = diameterOfBinaryTree(root->left);
        int option3 = diameterOfBinaryTree(root->right);

        int option1 = maxlength(root->left)+maxlength(root->right);
       

        return max(option1, max(option2,option3));
        
    }
};
