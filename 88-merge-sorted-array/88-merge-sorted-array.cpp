class Solution {
public:
   void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
		vector<int> temp;
		int i = 0;
		int j = 0;
		while (true) {
			if (i == m + n || n == 0)
				break;
			if (j >= n) {
				if (i >= m) {
					if (nums1[i] == 0) {
						nums1[i] = temp[0];
						temp.erase(temp.begin());
					}
					else {
						temp.push_back(nums1[i]);
						nums1[i] = temp[0];
						temp.erase(temp.begin());
					}
				}
				else {
					if (nums1[i] > temp[0]) {
						temp.push_back(nums1[i]);
						nums1[i] = temp[0];
						temp.erase(temp.begin());
					}
				}
			}
			else {
				if (i >= m && nums1[i] == 0) {
					if (temp.size() > 0) {
						if (temp[0] > nums2[j]) {
							nums1[i] = nums2[j];
							j++;
						}
						else {
							nums1[i] = temp[0];
							temp.erase(temp.begin());
						}
					}
					else {
						nums1[i] = nums2[j];
						j++;
					}
				}
				else {
					if (temp.size() > 0) {
						if (nums2[j] < temp[0]) {
							if (nums1[i] > nums2[j]) {
								temp.push_back(nums1[i]);
								nums1[i] = nums2[j];
								j++;
							}
						}
						else {
							if (nums1[i] > temp[0]) {
								temp.push_back(nums1[i]);
								nums1[i] = temp[0];
								temp.erase(temp.begin());
							}
						}
					}
					else {
						if (nums1[i] > nums2[j]) {
							temp.push_back(nums1[i]);
							nums1[i] = nums2[j];
							j++;
						}
					}
				}
			}
			i++;
		}
	}
};