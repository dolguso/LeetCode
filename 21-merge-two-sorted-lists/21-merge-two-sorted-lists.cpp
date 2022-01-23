/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
		ListNode* result = new	 ListNode;
		ListNode* search = result;
		while (true) {
			ListNode* temp = new ListNode;
			if (list1 == nullptr && list2 == nullptr)
				break;
			if (list1 == nullptr) {
				temp->val = list2->val;
				list2 = list2->next;
			}
			else if (list2 == nullptr) {
				temp->val = list1->val;
				list1 = list1->next;
			}
			else {
				if (list1->val < list2->val)
				{
					temp->val = list1->val;
					list1 = list1->next;
				}
				else {
					temp->val = list2->val;
					list2 = list2->next;
				}
			}
			while (true) {
				if (search->next == nullptr)
					break;
				search = search->next;
			}
			search->next = temp;

		}
		return result->next;
	}
};