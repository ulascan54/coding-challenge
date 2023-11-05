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
ListNode *removeOccurences(ListNode *head, int key)
{
    // add your logic here
    while (head != nullptr && head->data == key)
    {
        ListNode *temp = head;
        head = head->next;
        delete temp;
    }

    ListNode *it = head;
    while (it != nullptr && it->next != nullptr)
    {
        if (it->next->data == key)
        {
            ListNode *temp = it->next;
            it->next = temp->next;
            delete temp;
        }
        else
        {
            it = it->next;
        }
    }

    return head;
}