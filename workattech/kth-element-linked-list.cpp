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

ListNode *addAtkthElement(ListNode *head, int k, ListNode *newElement)
{
	if (k == 1)
	{
		newElement->next = head;
		head = newElement;
	}
	else
	{
		ListNode *iterator = head;
		while (k > 2 && iterator != NULL)
		{
			iterator = iterator->next;
			k--;
		}
		newElement->next = iterator->next;
		iterator->next = newElement;
	}
	return head;
}