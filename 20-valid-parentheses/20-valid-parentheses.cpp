class Solution {
public:
    bool isValid(string s) {
		int size = s.size();
		string check = "";
		bool result = true;
		int count = 0;
		for (int i = 0; i < size; i++) {
			switch (s[i]) {
			case '(':
			case '{':
			case '[':
				check += s[i];
				count++;
				break;
			case ')':
				if (check.size() > 0) {
					if (check[check.size() - 1] == '(')
					{
						check = check.substr(0, check.size() - 1);
						count--;
					}
					else
						result = false;
				}
				else
					result = false;
				break;
			case '}':
				if (check.size() > 0) {
					if (check[check.size() - 1] == '{')
					{
						check = check.substr(0, check.size() - 1);
						count--;
					}
					else
						result = false;
				}
				else
					result = false;
				break;
			case ']':
				if (check.size() > 0) {
					if (check[check.size() - 1] == '[')
					{
						check = check.substr(0, check.size() - 1);
						count--;
					}
					else
						result = false;
				}
				else
					result = false;
				break;
			}
			if (result == false)
				break;
		}
		return result && (count == 0);
	}
};