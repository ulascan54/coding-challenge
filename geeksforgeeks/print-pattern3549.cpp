//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{
public:
    vector<int> pattern(int N)
    {

        vector<int> result;
        if (N == 0)
        {
            result.push_back(N);
            return result;
        }
        stack<int> s;
        int initial = N;
        while (!(N <= 0))
        {
            s.push(N);
            N -= 5;
        }
        while (N != initial + 5)
        {
            s.push(N);
            N += 5;
        }
        int size = s.size();
        for (int i = 0; i < size; i++)
        {
            result.push_back(s.top());
            s.pop();
        }
        return result;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;

        Solution ob;
        vector<int> ans = ob.pattern(N);
        for (int u : ans)
            cout << u << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends