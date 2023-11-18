#include <queue>
using namespace std;
/* Use this Queue class
class Queue {
    Queue (int capacity)
    int size()
    boolean isEmpty()
    int front()
    int back()
    void push(int element)
    void pop()
};
*/

// Implement the Stack class
class Stack
{
private:
    queue<int> add;
    queue<int> remove;

public:
    Stack(int capacity)
    {
    }

    bool isEmpty()
    {
        return add.empty() && remove.empty();
    }

    int size()
    {
        return add.size() + remove.size();
    }

    int top()
    {
        if (isEmpty())
            return -1;
        else
        {
            return add.front();
        }
    }

    void push(int element)
    {
        while (!add.empty())
        {
            remove.push(add.front());
            add.pop();
        }

        add.push(element);

        while (!remove.empty())
        {
            add.push(remove.front());
            remove.pop();
        }
    }

    void pop()
    {
        if (isEmpty())
            return;
        else
        {
            add.pop();
        }
    }
};