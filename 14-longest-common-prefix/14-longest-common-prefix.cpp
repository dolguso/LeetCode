class Solution {
public:
	string longestCommonPrefix(vector<string>& strs) {
		int length = strs.size();
		string compString = "";
		int shortIndex = 0;
		int lengthCount = 201;
		string resultString = "";
		vector<int> dupliCount;
		dupliCount.assign(length, 0);
		int shortestLength = 201;
		for (int i = 0; i < length; i++) {
			if (lengthCount > strs[i].size())
			{
				compString = strs[i];
				shortIndex = i;
				lengthCount = strs[i].size();
			}
		}
		for (int i = 0; i < length; i++) {
			if (i == shortIndex)
				continue;
			string baseString = strs[i];
			for (int j = 0; j < compString.size(); j++) {
				if (compString[j] == baseString[j])
				{
					dupliCount[i]++;
				}
				else
					break;
			}
			if (dupliCount[i] < shortestLength)
				shortestLength = dupliCount[i];
		}
		return compString.substr(0, shortestLength);
	}
};