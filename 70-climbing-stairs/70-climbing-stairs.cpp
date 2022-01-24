class Solution {
public:
	int fiboArray[48] = { 0 };
	int climbStairs(int n) {
		int result = 0;
		fiboArray[n - 1] = fibo(n + 1);
		result = fiboArray[n - 1];
		return result;
	}
	int fibo(int num) {
		if (fiboArray[num] > 0)
			return fiboArray[num];
		else {
			if (num == 1)
				return fiboArray[1] = 1;
			else if (num == 2)
				return fiboArray[2] = 1;
			else if (num == 0)
				return fiboArray[0] = 0;
			else
				return fiboArray[num] = fibo(num - 1) + fibo(num - 2);
		}
	}
};