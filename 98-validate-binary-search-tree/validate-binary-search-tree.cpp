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
    vector<int> inorderbst;
    void inorder(TreeNode* root){
        if(root == NULL) return;

        inorder(root->left);
        inorderbst.push_back(root->val);
        inorder(root->right);
    }
    bool isValidBST(TreeNode* root) {
        if(root == NULL) return true;
        inorder(root);

        int n =inorderbst.size();
        for(int i = 0; i < n - 1; i++ ){
            if(inorderbst[i] >= inorderbst[i+1]) return false;
        }
        return true;

    }
};