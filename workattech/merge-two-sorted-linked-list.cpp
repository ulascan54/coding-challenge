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

ListNode *mergeTwoSortedList(ListNode *firstList, ListNode *secondList)
{
    ListNode *orj = new ListNode(0);
    ListNode *list = orj;
    while (firstList != NULL && secondList != NULL)
    {
        if (firstList->data < secondList->data)
        {
            list->next = new ListNode(firstList->data);
            firstList = firstList->next;
            list = list->next;
        }
        else
        {
            list->next = new ListNode(secondList->data);
            secondList = secondList->next;
            list = list->next;
        }
    }
    if (firstList == NULL)
    {
        while (secondList != NULL)
        {
            list->next = new ListNode(secondList->data);
            secondList = secondList->next;
            list = list->next;
        }
    }
    if (secondList == NULL)
    {
        while (firstList != NULL)
        {
            list->next = new ListNode(firstList->data);
            firstList = firstList->next;
            list = list->next;
        }
    }
    return orj->next;
}