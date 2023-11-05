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
ListNode *removeDuplicates(ListNode *head)
{
    if (head == nullptr)
    {
        return head;
    }
    ListNode *cur = head;

    while (cur->next != NULL)
    {
        if (cur->next->data != cur->data)
        {
            cur = cur->next;
        }
        else
        {
            ListNode *ditem = cur->next;
            cur->next = cur->next->next;
            delete ditem;
        }
    }
    return head;
}