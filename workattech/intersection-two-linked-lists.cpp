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

ListNode *getIntersectionNode(ListNode *A, ListNode *B)
{
    int lenA = 0;
    int lenB = 0;
    ListNode *tempA = A;
    ListNode *tempB = B;

    while (tempA != nullptr)
    {
        lenA++;
        tempA = tempA->next;
    }

    while (tempB != nullptr)
    {
        lenB++;
        tempB = tempB->next;
    }

    tempA = A;
    tempB = B;

    while (lenA > lenB)
    {
        tempA = tempA->next;
        lenA--;
    }

    while (lenB > lenA)
    {
        tempB = tempB->next;
        lenB--;
    }

    while (tempA != nullptr && tempB != nullptr)
    {
        if (tempA == tempB)
        {
            return tempA;
        }
        tempA = tempA->next;
        tempB = tempB->next;
    }

    return nullptr;
}