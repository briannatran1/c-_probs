/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(!root || root == q || root == p) {
            return root;
        }

        TreeNode *left = lowestCommonAncestor(root->left, p, q);
        TreeNode *right = lowestCommonAncestor(root->right, p, q);

        if (left && right) {
            return root;
        }

        return left ? left : right;
    }
};

/* req:
    - fn takes in root of binary tree, 2 nodes
    - find LCA of p and q
    - return node
*/

// base case: root is null, or root is equal to p or q -> found one of the nodes,
// return root
// recursively call fn on left and right subtrees with p and q nodes
// if left and right are not null,
// return root
// else, return left or right (not null)
