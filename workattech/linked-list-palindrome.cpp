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

bool isPalindrome(ListNode *list)
{
    // add your logic here
    if (list == NULL || list->next == NULL)
    {
        return true;
    }

    ListNode *slow = list;
    ListNode *fast = list;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    ListNode *prev = NULL;
    ListNode *current = slow;
    ListNode *next = NULL;

    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    ListNode *first = list;
    ListNode *second = prev;
    while (second != NULL)
    {
        if (first->data != second->data)
        {
            return false;
        }
        first = first->next;
        second = second->next;
    }
    return true;
}