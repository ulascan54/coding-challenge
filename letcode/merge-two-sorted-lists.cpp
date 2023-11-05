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
class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        ListNode cur(0);
        ListNode *merge = &cur;
        while (1)
        {
            if (list1 == NULL)
            {
                merge->next = list2;
                break;
            }
            if (list2 == NULL)
            {
                merge->next = list1;
                break;
            }
            if (list1->val <= list2->val)
            {
                merge->next = new ListNode(list1->val, NULL);
                list1 = list1->next;
                merge = merge->next;
            }
            else
            {
                merge->next = new ListNode(list2->val, NULL);
                list2 = list2->next;
                merge = merge->next;
            }
        }
        return cur.next;
    }
};