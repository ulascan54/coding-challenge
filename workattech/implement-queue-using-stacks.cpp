#include <iostream>
#include <stack>
using namespace std;

/* Use this Stack class
class Stack {
    Stack (int capacity)
    int size()
    boolean isEmpty()
    int top()
    void push(int element)
    void pop()
};
*/

// Implement the Queue class
class Queue
{
private:
    stack<int> enqueue;
    stack<int> dequeue;

public:
    Queue(int capacity)
    {
    }

    bool isEmpty()
    {
        return enqueue.empty() && dequeue.empty();
    }

    int size()
    {
        return enqueue.size() + dequeue.size();
    }

    int front()
    {
        if (isEmpty())
            return -1;
        if (dequeue.empty())
        {
            while (!enqueue.empty())
            {
                dequeue.push(enqueue.top());
                enqueue.pop();
            }
        }
        return dequeue.top();
    }

    int back()
    {
        if (isEmpty())
            return -1;
        if (enqueue.empty())
        {
            while (!dequeue.empty())
            {
                enqueue.push(dequeue.top());
                dequeue.pop();
            }
        }
        return enqueue.top();
    }

    void push(int element)
    {
        enqueue.push(element);
    }

    void pop()
    {
        if (isEmpty())
        {
            return;
        }
        if (dequeue.empty())
        {
            while (!enqueue.empty())
            {
                dequeue.push(enqueue.top());
                enqueue.pop();
            }
        }
        dequeue.pop();
    }
};