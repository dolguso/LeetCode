class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
		vector<int> temp(n);
		if (n == 1 && edges.size() == 0 && source == destination)
			return true;
		/*for (int i = 0; i < edges.size(); i++) {
			if (edges[i][0] > edges[i][1]) {
				int temp = edges[i][0];
				edges[i][0] = edges[i][1];
				edges[i][1] = temp;
			}
		}*/
		sort(edges.begin(), edges.end(), less<vector<int>>());
		vector<int> checkArray;
		checkArray.push_back(source);
		vector<int> duplicate(n);
		while (true) {
			vector<int> tempArray;
			for (int i = 0; i < checkArray.size(); i++) {
				duplicate[checkArray[i]] = -1;
				bool skip = false;
				for (int j = 0; j < edges.size(); j++) {

					if (edges[j][0] == checkArray[i] && duplicate[edges[j][1]] != -1)
					{
						skip = true;
						tempArray.push_back(edges[j][1]);
						if (edges[j][1] == destination) {
							return true;
						}
					}
					else if (edges[j][1] == checkArray[i] && duplicate[edges[j][0]] != -1) {
						skip = true;
						tempArray.push_back(edges[j][0]);
						if (edges[j][0] == destination) {
							return true;
						}
					}
					/*else if (edges[j][0] != checkArray[i] && edges[j][1] != checkArray[i] && skip == true)
					{
						start_point = j;
						break;
					}*/
				}
			}
			checkArray = tempArray;
			if (tempArray.size() == 0)
				break;
		}
		return false;
	}
};