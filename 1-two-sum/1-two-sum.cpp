class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		int size = nums.size();
		int index_a = 0;
		int index_b = 0;
		for (int i = 0; i < size; i++) {
			for (int j = 0; j < size; j++) {
				if (j == i)
					continue;
				if (nums[i] + nums[j] == target) {
					index_a = i;
					index_b = j;
					break;
				}
			}
			if (index_a != 0 || index_b != 0)
				break;
		}
		vector<int> result = { index_a, index_b };
		return result;
	}
};