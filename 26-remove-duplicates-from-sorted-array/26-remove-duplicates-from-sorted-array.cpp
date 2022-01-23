class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
		vector<int> count;
		count.assign(201, 0);
		int inputIndex = 0;
		int lastNum = -101;
		int result = 0;
		for (int i = 0; i < nums.size(); i++) {
			if (lastNum != nums[i]) {
				nums[inputIndex] = nums[i];
				lastNum = nums[i];
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