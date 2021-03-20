/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
void rightView(TreeNode *root, vector<int> &ans, int level, int &maxLevel)
{
  if (root == NULL)
    return;

  if (level > maxLevel)
  {
    ans.push_back(root->val);
    maxLevel = level;
  }

  rightView(root->right, ans, level + 1, maxLevel);
  rightView(root->left, ans, level + 1, maxLevel);
}
vector<int> Solution::solve(TreeNode *A)
{

  vector<int> ans;
  int maxLevel = -1;
  rightView(A, ans, 0, maxLevel);

  return ans;
}
