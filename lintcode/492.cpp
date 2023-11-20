class Node
{
public:
    int item;
    Node *next;
    Node(int value)
    {
        item = value;
        next = nullptr;
    }
};

class MyQueue
{
public:
    Node *front;
    Node *back;
    MyQueue()
    {
        front = nullptr;
        back = nullptr;
    }
    void enqueue(int item)
    {
        Node *newNode = new Node(item);
        if (front == nullptr)
        {
            front = newNode;
            back = newNode;
        }
        else
        {
            back->next = newNode;
            back = newNode;
        }
    }
    int dequeue()
    {
        int data = -1;
        if (front != nullptr)
        {
            data = front->item;
            Node *temp = front;
            front = front->next;
            delete temp;
        }
        return data;
    }
};
