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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
		TreeNode* result = makeBST(nums, 0, nums.size());
		return result;
	}

	TreeNode* makeBST(vector<int>& nums, int min, int max) {
		if (min == max)
			return NULL;
		int mid = (min + max) / 2;
		TreeNode* result = new TreeNode;
		result->val = nums[mid];
		nums[mid] = -100000;
		if (mid == min + 1 && mid == max - 1) {
			TreeNode* temp_01 = new TreeNode;
			temp_01->val = nums[min];
			if (nums[min] != -100000) {
				result->left = temp_01;
				nums[min] = -100000;
			}
			if (max < nums.size()) {
				TreeNode* temp_02 = new TreeNode;
				temp_02->val = nums[max];
				if (nums[max] != -100000) {
					result->right = temp_02;
					nums[max] = -100000;
				}
			}
			return result;
		}
		if (max == 1) {
			return result;
		}
		if (min == mid)
			return NULL;
		result->left = makeBST(nums, min, mid);
		result->right = makeBST(nums, mid, max);
		return result;
	}
};