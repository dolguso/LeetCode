class Solution {
public:
	int findJudge(int n, vector<vector<int>>& trust) {
		vector<int> check(n);
		int count = 0;
		vector<int> person;
		if (n == 1 && trust.size() == 0)
			return n;
		for (int i = 0; i < trust.size(); i++) {
			check[trust[i][0] - 1] = -1;
			if (check[trust[i][1] - 1] >= 0)
			{
				check[trust[i][1] - 1]++;
				if (check[trust[i][1] - 1] == n - 1)
				{
					person.push_back(trust[i][1]);
					count++;
				}
			}
		}
		if (count == 1)
		{
			if (check[person[0] - 1] > 0)
				return person[0];
			else
				return -1;
		}
		else {
			return -1;
		}
	}
};