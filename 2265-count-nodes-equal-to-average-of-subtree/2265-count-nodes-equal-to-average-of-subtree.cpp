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
    int cnt1=0;
    int solve(TreeNode *root,int &cnt)
    {
        if(root==NULL)
            return 0;
        cnt++;
        int left=solve(root->left,cnt);
        int right=solve(root->right,cnt);
        return root->val+left+right;
    }
    void ans(TreeNode* root)
    {
        if(root==NULL)
            return ;
        int cnt=0;
        int avg=(solve(root,cnt))/cnt;
        if(root->val==avg)
            cnt1++;
        ans(root->left);
        ans(root->right);
    }
    int averageOfSubtree(TreeNode* root) {
        ans(root);
        return cnt1;
        
    }
};