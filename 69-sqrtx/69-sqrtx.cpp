class Solution {
public:
	int mySqrt(int x) {
		long num_high = x / 2;
		long num_low = 0;
		
		while (true) {
			if (num_low * num_low <= x && (num_low + 1) * (num_low + 1) > x)
				break;
			if (num_low * num_low > x)
			{
				num_high = num_low;
				num_low = num_low / 2;
			}
			else {
				num_low = ((num_low + num_high) / 2 == num_low ? num_low + 1 : (num_low + num_high) / 2);
			}

		}
		return num_low;
	}
};