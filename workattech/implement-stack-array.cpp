class Stack
{
    int capacity;
    int *data;
    int len;

public:
    Stack(int cap)
    {
        this->capacity = cap;
        this->data = new int[capacity];
        this->len = 0;
    }

    bool isEmpty()
    {
        if (len == 0)
        {
            return true;
        }
        return false;
    }

    int size()
    {
        return len;
    }

    int top()
    {
        return len != 0 ? data[len - 1] : -1;
    }

    void push(int element)
    {
        data[len] = element;
        len++;
    }

    void pop()
    {
        len--;
    }
};
