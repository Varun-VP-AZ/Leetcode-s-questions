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
        if(root == NULL){
            return {};
        }
        queue<TreeNode*>q;
        bool flag = true;
        vector<vector<int>>ans;
        

        q.push(root);
        while(!q.empty()){
            int n = q.size();
            vector<int> temp;

            for(int i = 0; i<n; i++){
                TreeNode* front = q.front();
                q.pop();
                if(front->left != NULL) q.push(front->left);
                if(front->right != NULL) q.push(front->right);
                temp.push_back(front->val);

            }
            if(flag == true){
                ans.push_back(temp);
                flag = false;
            } else {
                reverse(temp.begin(), temp.end());
                ans.push_back(temp);
                flag = true;
            }
            
        }
        return ans;
    }
};