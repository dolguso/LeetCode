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
    vector<int> inorderTraversal(TreeNode* root) {
		vector<int> result;
		TreeNode* search = root;
		result = GetLeft(root, result);
		return result;
	}

	vector<int> GetLeft(TreeNode* root, vector<int> result) {
		if (root != NULL)
		{
			if (root->left != NULL)
				result = GetLeft(root->left, result);
			result.push_back(root->val);
			if (root->right != NULL)
				result = GetLeft(root->right, result);
		}
		return result;
	}
};