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

ListNode *removekthElement(ListNode *head, int k)
{
    if (k == 1)
    {
        ListNode *cur = head;
        head = head->next;
        delete cur;
        cur = NULL;
    }
    else
    {
        ListNode *cur = head;
        while (k > 2 && cur->next != NULL)
        {
            cur = cur->next;
            k--;
        }
        if (cur->next != NULL)
        {
            ListNode *del = cur->next;
            cur->next = del->next;
            delete del;
            del = NULL;
        }
    }
    return head;
}
