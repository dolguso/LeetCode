class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
		int result = 0;
		for (int i = 0; i < nums.size(); i++)
		{
			if (nums[i] < target)
			{
				if (i == nums.size() - 1)
					result = i + 1;
				continue;
			}
			else if (nums[i] >= target)
			{
				result = i;
				break;
			}
		}

		return result;
	}
};