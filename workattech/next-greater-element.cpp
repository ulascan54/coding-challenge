#include <iostream>
#include <stack>
using namespace std;

vector<int> getNextGreaterElement(vector<int> &A)
{
    int n = A.size();
    vector<int> result(n, -1);
    stack<int> s;
    for (int i = 0; i < n; i++)
    {
        while (!s.empty() && A[i] > A[s.top()])
        {
            result[s.top()] = A[i];
            s.pop();
        }
        s.push(i);
    }
    return result;
}