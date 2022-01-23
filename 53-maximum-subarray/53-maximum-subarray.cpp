class Solution {
public:
    int maxSubArray(vector<int>& nums) {
		///* 최악의 방법*/
		//int length = nums.size();
		//int minSum = INT_MIN;

		//for (int i = 1; i <= length; i++) {
		//	for (int j = 0; j < length - (i - 1); j++) {
		//		int tempSum = 0;
		//		for (int k = 0; k < i; k++) {
		//			tempSum += nums[j + k];
		//		}
		//		if (minSum < tempSum)
		//			minSum = tempSum;
		//	}
		//}
		//return minSum;

		/*카데인 알고리즘*/
		int length = nums.size();
		int max_sum = INT_MIN;
		int end_sum = 0;

		for (int i = 0; i < length; i++) {
			end_sum = max(end_sum + nums[i], nums[i]);
			max_sum = max(end_sum, max_sum);
		}
		return max_sum;
	}
};