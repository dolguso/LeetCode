class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
		int length = digits.size();
		vector<int> result = digits;
		int check = 0;
		while (true)
		{
			if (length - 1 - check < 0)
			{
				result.insert(result.begin(), 1);
				break;
			}
			if (result[length - 1 - check] == 9) {
				result[length - 1 - check] = 0;
				check++;
			}
			else
			{
				result[length - 1 - check] += 1;
				break;
			}
		}
		return result;
	}
};