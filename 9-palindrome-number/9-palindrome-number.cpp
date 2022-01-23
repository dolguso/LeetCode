class Solution {
public:
	bool isPalindrome(int x) {
		string num2str = to_string(x);
		bool check = false;
		int half = (int)((num2str.size() + 1) / 2);
		for (int i = 0; i < half; i++) {
			if (num2str[i] == num2str[num2str.size() - 1 - i])
			{
				if (i == half - 1)
					check = true;
				continue;
			}
			else
				break;
		}
		return check;
	}
};