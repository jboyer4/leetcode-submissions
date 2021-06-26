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
    int maxDepth(TreeNode* root) {
        return recursiveGetDepth(1, root);    
    }
    int recursiveGetDepth(int curDepth, TreeNode* cur){
        if(cur == NULL) return 0;
        int leftDepth = curDepth + recursiveGetDepth(curDepth, cur->left);
        int rightDepth = curDepth + recursiveGetDepth(curDepth, cur->right);
        if(leftDepth > rightDepth) return leftDepth;
        return rightDepth;       
    }
};