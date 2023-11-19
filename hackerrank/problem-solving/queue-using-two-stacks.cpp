#include <cmath>
#include <cstdio>
#include <vector>
#include <stack>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    stack<int> s1;
    stack<int> s2;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        char operation;
        cin >> operation;
        if (operation == '1')
        {
            int x;
            cin >> x;
            s1.push(x);
        }
        else if (operation == '2')
        {
            if (s2.empty())
            {
                while (!s1.empty())
                {
                    s2.push(s1.top());
                    s1.pop();
                }
            }
            if (!s2.empty())
            {
                s2.pop();
            }
        }
        else if (operation == '3')
        {
            if (s2.empty())
            {
                while (!s1.empty())
                {
                    s2.push(s1.top());
                    s1.pop();
                }
            }
            if (!s2.empty())
            {
                std::cout << s2.top() << std::endl;
            }
        }
    }

    return 0;
}
