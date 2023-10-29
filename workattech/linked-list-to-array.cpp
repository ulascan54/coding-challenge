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

vector<int> linkedListToArray(ListNode *head)
{
    // add your logic here
    vector<int> arr;
    ListNode *iterator = head;
    while (iterator != 0)
    {
        arr.push_back(iterator->data);
        iterator = iterator->next;
    }
    return arr;
}