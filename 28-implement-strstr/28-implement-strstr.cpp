class Solution {
public:
    int strStr(string haystack, string needle) {
		int index = -1;
		if (needle == "" || haystack == needle)
			index = 0;
		if (!(haystack == "" || haystack.size() < needle.size()))
			for (int i = 0; i < haystack.size() - (needle.size() - 1); i++) {
				if (haystack.substr(i, needle.size()) == needle) {
					index = i;
					break;
				}
			}
		return index;
	}
};