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

ListNode *kthElement(ListNode *head, int k)
{
	// add your logic here
	if (k == 1)
	{
		return head;
	}
	return kthElement(head->next, k - 1);
}