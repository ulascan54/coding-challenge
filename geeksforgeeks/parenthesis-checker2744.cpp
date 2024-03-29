//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
public:
    // Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        stack<char> s;
        for (int i = 0; i < x.length(); i++)
        {
            if (x[i] == '(' ||
                x[i] == '{' ||
                x[i] == '[')
            {
                s.push(x[i]);
            }
            if (x[i] == ')' ||
                x[i] == '}' ||
                x[i] == ']')
            {
                if (s.empty())
                {
                    return false;
                }
                if (x[i] == ')' && s.top() == '(' ||
                    x[i] == '}' && s.top() == '{' ||
                    x[i] == ']' && s.top() == '[')
                {
                    s.pop();
                }
                else
                    return false;
            }
        }
        return s.empty() ? true : false;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    string a;
    cin >> t;
    while (t--)
    {
        cin >> a;
        Solution obj;
        if (obj.ispar(a))
            cout << "balanced" << endl;
        else
            cout << "not balanced" << endl;
    }
}
// } Driver Code Ends