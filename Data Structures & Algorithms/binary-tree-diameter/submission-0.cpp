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

    int diametro = 0;                         

    int altura(TreeNode* root) {
        if (root == nullptr) {
            return 0;                       
        }

        int izq = altura(root->left);
        int der = altura(root->right);

        diametro = max(diametro, izq + der);     

        return 1 + max(izq, der);                         
    }



    int diameterOfBinaryTree(TreeNode* root) {
        altura(root);

        return diametro;
    }
};
