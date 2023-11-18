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

// Implement the Queue class

class Queue
{
private:
    ListNode *head;
    ListNode *tail;
    int cap;
    int length;

public:
    Queue(int capacity)
    {
        head = tail = nullptr;
        length = 0;
        cap = capacity;
    }

    bool isEmpty()
    {
        return (length == 0);
    }

    int size()
    {
        return length;
    }

    int front()
    {
        if (isEmpty())
            return -1;
        else
        {
            return head->data;
        }
    }

    int back()
    {

        if (isEmpty())
            return -1;
        else
        {
            return tail->data;
        }
    }

    void push(int element)
    {
        if (isEmpty())
        {
            ListNode *tmp = new ListNode(element);
            head = tail = tmp;
        }
        else
        {
            ListNode *tmp = new ListNode(element);
            tail->next = tmp;
            tail = tmp;
        }
        length++;
    }

    void pop()
    {
        if (!isEmpty())
        {
            if (head == tail)
            {
                delete head;
                head = tail = nullptr;
            }
            else
            {
                ListNode *ditem = head;
                head = head->next;

                delete ditem;
            }
            length--;
        }
    }
};
