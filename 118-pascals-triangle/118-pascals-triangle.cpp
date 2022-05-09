class Solution {
public:
    vector<vector<int>> generate(int numRows) {
		vector<vector<int>> return_vector;
		for (int i = 0; i < numRows; i++) {
			vector<int> temp;
			for (int j = 0; j <= i; j++) {
				if (j == 0 || j == i)
					temp.push_back(1);
				else {
					temp.push_back(return_vector.back()[j - 1] + return_vector.back()[j]);
				}
			}
			return_vector.push_back(temp);
		}
		return return_vector;
	}
};