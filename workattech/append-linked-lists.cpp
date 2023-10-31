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

ListNode *appendLists(ListNode *list1, ListNode *list2)
{
    // add your logic here
    ListNode *cur = list1;
    while (cur->next != 0)
    {
        cur = cur->next;
    }
    cur->next = list2;
    return list1;
}