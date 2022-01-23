#include<string>
using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
		int length_a = a.size();
		int length_b = b.size();
		string result = "";
		int length_long = length_a >= length_b ? length_a : length_b;
		int length_short = length_a >= length_b ? length_b : length_a;
		string string_long = length_a >= length_b ? a : b;
		string string_short = length_a >= length_b ? b : a;

		int addNum = 0;
		int check_a = 0;
		int check_b = 0;
		for (int i = 0; i < length_short; i++) {
			check_a = string_long[length_long - 1 - i] == '1' ? 1 : 0;
			check_b = string_short[length_short - 1 - i] == '1' ? 1 : 0;
			int tempSum = (addNum + check_a + check_b);
			addNum = tempSum / 2;
			result = (tempSum % 2 == 0 ? "0" : "1") + result;
		}

		if (length_long > length_short) {

			check_a = string_long[length_long - length_short - 1] == '1' ? 1 : 0;
			int temp = (check_a + addNum);
			result = (temp % 2 == 0 ? "0" : "1") + result;
			addNum = temp / 2;

			for (int i = 0; i < length_long - length_short - 1; i++) {
				int tempSum = ((string_long[length_long - length_short - 2 - i] == '1' ? 1 : 0) + addNum);
				addNum = tempSum / 2;
				result = (tempSum % 2 == 0 ? "0" : "1") + result;
			}
		}
		result = (addNum == 0 ? "" : "1") + result;
		if (result == "")
			result = "0";
		return result;
	}
};