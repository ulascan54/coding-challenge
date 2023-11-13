#include <stack>
#include <iostream>

class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> stack;
        char open[3] = {'(', '{', '['};
        char close[3] = {')', '}', ']'};
        int countOpen[3] = {0, 0, 0};
        int countClose[3] = {0, 0, 0};

        for (int i = 0; i < s.length(); i++)
        {
            char current = s[i];

            for (int j = 0; j < 3; j++)
            {
                if (open[j] == current)
                {
                    stack.push(current);
                    countOpen[j]++;
                }
                else if (close[j] == current)
                {
                    if (stack.empty() || stack.top() != open[j])
                    {
                        return false;
                    }
                    stack.pop();
                    countClose[j]++;
                }
            }
        }
        if (countOpen[0] == countClose[0] && countOpen[1] == countClose[1] && countOpen[2] == countClose[2])
            return true;
        else
            return false;
    }
};