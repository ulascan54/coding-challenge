/* This is the ListNode class definition

class ListNode {
public:
    int data;
    ListNode* next;

    ListNode(int data) {
        this->data = data;
        this->next = NULL;
    }
};
*/

int getMiddleElementOfLinkedList(ListNode *list)
{
    int count = 0;
    for (ListNode *it = list; it != NULL; it = it->next)
    {
        count++;
    }
    ListNode *cur = list;
    if (count % 2 == 0)
    {
        count--;
    }

    for (int i = 0; i < count / 2; i++)
    {
        cur = cur->next;
    }

    return cur->data;
}