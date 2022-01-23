class Solution {
public:
    int lengthOfLastWord(string s) {
		vector<string> split;
		string temp = "";
		for (int i = 0; i < s.size(); i++) {
			if (s[i] == ' ')
			{
				if (temp == "")
					continue;
				else {
					split.push_back(temp);
					temp = "";
				}
			}
			else
				temp += s[i];
		}
		if (temp != "")
			split.push_back(temp);
		return split[split.size() - 1].size();
	}
};