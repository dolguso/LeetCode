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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* result = new ListNode;
        ListNode* search = head;
        ListNode* input = result;
        int lastNum = -101;
        while(true)
        {
            if(search == NULL)
                break;
            if(search->val != lastNum)
            {
                ListNode* temp = new ListNode;
                temp->val = search->val;
                lastNum = search->val;
                input->next = temp;
                input = input->next;
            }
            search = search->next;
        }
        return result->next;
    }
};