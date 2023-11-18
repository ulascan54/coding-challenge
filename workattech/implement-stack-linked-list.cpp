/*
class ListNode
{
public:
    int data;
    ListNode *next;

    ListNode(int data)
    {
        this->data = data;
        this->next = nullptr;
    }
};
*/
// Implement the Stack class
// Implement the Stack class
class Stack
{
private:
    ListNode *tp;
    int len;
    int cap;

public:
    Stack(int capacity)
    {
        cap = capacity;
        len = 0;
        tp = 0;
    }

    bool isEmpty()
    {
        if (tp == nullptr)
            return true;
        return false;
    }

    int size()
    {
        return len;
    }

    int top()
    {
        if (tp != nullptr)
            return tp->data;
        return -1;
    }

    void push(int element)
    {
        if (len == cap)
            return;

        ListNode *tmp = new ListNode(element);
        tmp->next = tp;
        tp = tmp;
        len++;
    }

    void pop()
    {
        if (tp == nullptr)
        {
            return;
        }
        if (tp->next == nullptr)
        {
            delete tp;
            tp = nullptr;
        }
        else
        {
            ListNode *ditem = tp;
            tp = tp->next;
            delete ditem;
        }
        len--;
    }
};