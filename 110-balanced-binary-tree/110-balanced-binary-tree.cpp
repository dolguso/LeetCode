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
    bool result = true;
	bool isBalanced(TreeNode* root) {
		int leftLayer = 0;
		int rightLayer = 0;
		if (root == NULL)
			return true;
		getLayer(root, 0);
		return result;
	}

	int getLayer(TreeNode* node, int layer) {
		int leftMax = layer;
		int rightMax = layer;
		if (node->left != NULL)
		{
			int temp = getLayer(node->left, layer + 1);
			leftMax = leftMax > temp ? leftMax : temp;
		}
		if (node->right != NULL)
		{
			int temp = getLayer(node->right, layer + 1);
			rightMax = rightMax > temp ? rightMax : temp;
		}
		if (abs(rightMax - leftMax) > 1)
			result = false;
		return leftMax > rightMax ? leftMax : rightMax;
	}
};