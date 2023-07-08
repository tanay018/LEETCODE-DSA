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
TreeNode* f1(TreeNode* root){
while(root->left){
root=root->left;
}
return root;


}
TreeNode* f(TreeNode* root){
if(root->left==NULL)return root->right;
if(root->right==NULL)return root->left;
TreeNode* l=root->left;
TreeNode* r=root->right;
f1(r)->left=l;
return root->right;
    }
    TreeNode* deleteNode(TreeNode* root, int key) {
     if(root==NULL)return NULL;
     if(root->val==key)return f(root);
     TreeNode* dum=root;
     while(root){
         if(root->val>key){
             if(root->left&&root->left->val==key){
                 root->left=f(root->left);
break;
             }else{
                 root=root->left;
             }


         }
         else
         {
             if(root->right&&root->right->val==key){
                 root->right=f(root->right);
                 break;
             }
             else
             root=root->right;
         }


     }
     return dum;   
    }
};