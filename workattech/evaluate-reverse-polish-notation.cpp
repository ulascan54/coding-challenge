#include <iostream>
#include <vector>
#include <stack>
#include <string>
using namespace std;
int evalRPN(vector<string> &tokens)
{
    stack<int> s;

    for (int i = 0; i < tokens.size(); i++)
    {
        if (tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "/" || tokens[i] == "*")
        {
            int result = 0;
            if (tokens[i] == "+")
            {
                int operant2 = s.top();
                s.pop();
                int operant1 = s.top();
                s.pop();
                result = operant1 + operant2;
                s.push(result);
            }
            else if (tokens[i] == "-")
            {
                int operant2 = s.top();
                s.pop();
                int operant1 = s.top();
                s.pop();
                result = operant1 - operant2;
                s.push(result);
            }

            else if (tokens[i] == "*")
            {
                int operant2 = s.top();
                s.pop();
                int operant1 = s.top();
                s.pop();
                result = operant1 * operant2;
                s.push(result);
            }

            else if (tokens[i] == "/")
            {
                int operant2 = s.top();
                s.pop();
                int operant1 = s.top();
                s.pop();
                result = operant1 / operant2;
                s.push(result);
            }
        }
        else
        {
            s.push(stoi(tokens[i]));
        }
    }

    return s.top();
}