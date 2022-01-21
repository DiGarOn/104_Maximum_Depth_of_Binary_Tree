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
#include <iostream>

using namespace std;

class Solution {
public:
    
    int dfs(TreeNode* root) {
        int lDepth = 0;
        int rDepth = 0;
        
        if(root->left != nullptr) {
            lDepth = dfs(root->left);
        }
        if(root->right != nullptr) {
            rDepth = dfs(root->right);
        }
        
        return max(lDepth, rDepth)+1;
        
    }
    
    int maxDepth(TreeNode* root) {
        int count = 0;
        if(root != nullptr) { count = dfs(root);}
        
        return count;
    }
};