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

ListNode *reverseLinkedList(ListNode *head)
{
    // add your logic here
    ListNode *next = nullptr;
    ListNode *prev = nullptr;
    while (head != nullptr)
    {
        next = head->next;
        head->next = prev;
        prev = head;
        head = next;
    }
    return prev;
}