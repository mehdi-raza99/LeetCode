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

    void countGoodNodesWithDfs(TreeNode* root,int& count,int greatestValue){
        if(!root)
            return;
        
        if(root->val >= greatestValue){
            count++;
            greatestValue=root->val;
        }

        countGoodNodesWithDfs(root->left,count, greatestValue);
        countGoodNodesWithDfs(root->right,count, greatestValue);
    }

    int goodNodes(TreeNode* root) {
        int numberOfGoodNodes=0;
        countGoodNodesWithDfs(root,numberOfGoodNodes,root->val);
        return numberOfGoodNodes;
    }
};