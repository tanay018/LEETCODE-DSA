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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
          vector<vector<int>> vec;
         queue <TreeNode*> q;
         int cnt=1;
         if(root==NULL)return vec;
         q.push(root);
         
         while(!q.empty()){
             int size=q.size();
             vector<int>level;
             cnt++;
             for(int i=0;i<size;i++){
            TreeNode*node=q.front();
               q.pop();
               if(node->left != NULL) q.push(node->left);
               if(node->right != NULL) q.push(node->right);
               level.push_back(node->val);
             }
             if(cnt%2==1){
                 reverse(level.begin(),level.end());
             }
             vec.push_back(level);
            
         }
        
        
         
         return vec;
    }
};