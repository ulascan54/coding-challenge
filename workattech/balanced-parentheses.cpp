#include <iostream>
#include <stack>
using namespace std;

bool isBalancedParentheses(string str)
{
    stack<char> s;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '(' || str[i] == '[' || str[i] == '{')
        {
            s.push(str[i]);
        }
        if (str[i] == ')' || str[i] == ']' || str[i] == '}')
        {
            if (s.empty())
                return false;

            if ((str[i] == ')' && s.top() == '(') ||
                (str[i] == ']' && s.top() == '[') ||
                (str[i] == '}' && s.top() == '{')

            )
                s.pop();
            else
                return false;
        }
    }
    return s.empty();
}

int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}
