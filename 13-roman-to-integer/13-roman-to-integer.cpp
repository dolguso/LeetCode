class Solution {
public:
	int romanToInt(string s) {
		int result = 0;
		int length = s.size();
		bool checkLast = true;
		for (int i = 0; i < length - 1; i++) {
			char checkChar = s[i + 1];
			switch (s[i])
			{
			case 'I':
				if (checkChar == 'V' || checkChar == 'X')
				{
					result += (charToInt(checkChar) - charToInt(s[i]));
					if (i == length - 2)
						checkLast = false;
					i++;
				}
				else
					result += charToInt(s[i]);
				break;
			case 'V':
			case 'L':
			case 'D':
			case 'M':
				result += charToInt(s[i]);
				break;
			case 'X':
				if (checkChar == 'L' || checkChar == 'C')
				{
					result += (charToInt(checkChar) - charToInt(s[i]));
					if (i == length - 2)
						checkLast = false;
					i++;
				}
				else
					result += charToInt(s[i]);
				break;
			case 'C':
				if (checkChar == 'D' || checkChar == 'M')
				{
					result += (charToInt(checkChar) - charToInt(s[i]));
					if (i == length - 2)
						checkLast = false;
					i++;
				}
				else
					result += charToInt(s[i]);
				break;
			}
		}
		if (checkLast == true) {
			result += charToInt(s[length - 1]);
		}
		return result;
	}
    
	int charToInt(char c) {
		if (c == 'I')
			return 1;
		else if (c == 'V')
			return 5;
		else if (c == 'X')
			return 10;
		else if (c == 'L')
			return 50;
		else if (c == 'C')
			return 100;
		else if (c == 'D')
			return 500;
		else if (c == 'M')
			return 1000;
        else
            return 0;
	}
};