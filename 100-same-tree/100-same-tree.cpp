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
	bool isSameTree(TreeNode* p, TreeNode* q) {
		vector<tuple<int, int>> check_a;
		vector<tuple<int, int>> check_b;
		check_a = GetLeft(p, check_a, 0);
		check_b = GetLeft(q, check_b, 0);
		return (check_a == check_b);
	}

	vector<tuple<int, int>> GetLeft(TreeNode* root, vector<tuple<int, int>> result, int layer) {
		if (root != NULL)
		{
			if (root->left != NULL)
				result = GetLeft(root->left, result, layer + 1);
			result.push_back(make_tuple(root->val, layer));
			if (root->right != NULL)
				result = GetLeft(root->right, result, layer + 1);
		}
		return result;
	}
};