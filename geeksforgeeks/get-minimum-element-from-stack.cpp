//{ Driver Code Starts
#include <bits/stdc++.h>
#include <stack>
using namespace std;

// } Driver Code Ends
/*
The structure of the class is as follows
class _stack{
stack<int> s;
int minEle;
public :
    int getMin();
    int pop();
    void push(int);
};
*/

class Solution
{
    int minEle;
    stack<int> s;

public:
    /*returns min element from stack*/
    int getMin()
    {
        return minEle;
    }

    /*returns poped element from stack*/
    int pop()
    {
        if (s.top() == minEle)
        {
            int top = s.top();
            s.pop();
            stack<int> x;
            minEle = s.top();
            for (int i = 0; i < s.size(); i++)
            {
                if (s.top() < minEle)
                {
                    minEle = s.top();
                }

                x.push(s.top());
                s.pop()
            }
            while (!x.empty())
            {
                s.push(x.top());
                x.pop()
            }

            return top;
        }
        else
        {
            int top = s.top();
            s.pop();
            return top;
        }
    }

    /*push element x into the stack*/
    void push(int x)
    {
        if (s.top())
        {
            if (s.top() < x)
            {
                minEle = s.top();
            }
            else
                minEle = x;
        }
        s.push(x);
    }
};

//{ Driver Code Starts.

int main()
{
    long long t;

    cin >> t;
    while (t--)
    {
        int q;
        cin >> q;
        Solution ob;
        while (q--)
        {
            int qt;
            cin >> qt;
            if (qt == 1)
            {
                // push
                int att;
                cin >> att;
                ob.push(att);
            }
            else if (qt == 2)
            {
                // pop
                cout << ob.pop() << " ";
            }
            else if (qt == 3)
            {
                // getMin
                cout << ob.getMin() << " ";
            }
        }
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends