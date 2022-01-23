class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
		int inputIndex = 0;
		int result = 0;
		for (int i = 0; i < nums.size(); i++) {
			if (val != nums[i]) {
				nums[inputIndex] = nums[i];
				result++;
				inputIndex++;
			}
		}
		for (int i = inputIndex; i < nums.size(); i++) {
			nums[i] = '_';
		}
		return result;
	}
};