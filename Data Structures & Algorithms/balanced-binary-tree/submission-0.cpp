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
int maxheight(TreeNode* root){
    if(root == NULL){
        return 0;
    }
    int leftheight =maxheight(root->left)+1;
     int rightheight =maxheight(root->right)+1;

     int maximumheight = max(leftheight,rightheight);
     return maximumheight;
}
    bool isBalanced(TreeNode* root) {
        if(root == NULL){
            return true;
        }
        int leftmaxheight= maxheight(root->left);
        int rightmaxheight= maxheight(root->right);

        if(abs(leftmaxheight-rightmaxheight)>1){
            return false;
        }

        else{
         bool leftans =   isBalanced(root->left);
          bool rightans =   isBalanced(root->right);

          if(leftans == true && rightans== true){
            return true;
          }
        }
        return false;
        
    }
};