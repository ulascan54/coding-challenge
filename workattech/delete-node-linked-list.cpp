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

void deleteNode(ListNode *node)
{
    if (node == nullptr || node->next == nullptr)
    {
        return;
    }

    node->data = node->next->data;

    ListNode *temp = node->next;
    node->next = node->next->next;
    delete temp;
}