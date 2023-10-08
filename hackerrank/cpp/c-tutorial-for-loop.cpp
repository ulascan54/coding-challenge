#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int n, x;

    cin >> n >> x;

    string numbers[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int c = 0;
    for (int i = n; i <= x; i++)
    {
        if (i > 9)
        {
            if (i % 2 == 0)
            {
                cout << "even" << endl;
            }
            else
            {
                cout << "odd" << endl;
            }
        }
        else
        {
            cout << numbers[i - 1] << endl;
        }
    }
    return 0;
}