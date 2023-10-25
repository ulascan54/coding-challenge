#include <iostream>
using namespace std;

class ListNode
{
public:
    int data;
    ListNode *next;

    ListNode(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

void printLinkedList(ListNode *head)
{
    // add your logic here
    ListNode *cur = head;
    while (cur != NULL)
    {
        cout << cur->data << " ";
        cur = cur->next;
    }
    delete cur;
    cur = NULL;
}

int main(int argc, char const *argv[])
{
    ListNode *head = new ListNode(1);
    ListNode *cur = head;
    for (int i = 2; i <= 5; i++)
    {
        cur->next = new ListNode(i);
        cur = cur->next;
    }
    printLinkedList(head);
    return 0;
}
