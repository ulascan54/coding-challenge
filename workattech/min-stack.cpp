// Implement the below class
class Node
{
public:
    int data;
    Node *next;
    Node(int val)
    {
        next = nullptr;
        data = val;
    }
};

class MinStack
{
private:
    Node *tp;

public:
    MinStack()
    {
        tp = nullptr;
    }
    void push(int x)
    {
        Node *nitem = new Node(x);
        if (tp != nullptr)
        {
            nitem->next = tp;
        }
        tp = nitem;
    }
    void pop()
    {
        Node *ditem = tp;
        tp = tp->next;
        delete ditem;
    }
    int top()
    {
        return tp->data;
    }
    int getMin()
    {
        int min = tp->data;
        Node *cur = tp;
        while (cur != nullptr)
        {
            if (min > cur->data)
            {
                min = cur->data;
            }
            cur = cur->next;
        }
        return min;
    }
};

/*
    // MinStack class and its object will be used as given below:
    MinStack *minStack = new MinStack();
    minStack->push(42);
    int tp = minStack->tp();
    int min = minStack->getMin();
    minStack->pop();
*/