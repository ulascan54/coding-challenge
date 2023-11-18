// Implement the Queue class
class Queue
{
private:
    int *data;
    int head;
    int tail;
    int len;
    int cap;

public:
    Queue(int capacity)
    {
        cap = capacity;
        data = new int[cap];
        head = 0;
        tail = cap - 1;
        len = 0;
    }

    bool isEmpty()
    {
        return (len == 0);
    }

    int size()
    {
        return len;
    }

    int front()
    {
        if (isEmpty())
            return -1;
        else
        {
            return data[head];
        }
    }

    int back()
    {
        if (isEmpty())
            return -1;
        else
        {
            return data[tail];
        }
    }

    void push(int element)
    {
        if (len == cap)
            return;
        else
        {
            tail = (tail + 1) % cap;
            data[tail] = element;
            len++;
        }
    }

    void pop()
    {
        if (isEmpty())
            return;
        else
        {
            head = (head + 1) % cap;
            len--;
        }
    }
};